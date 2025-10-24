#include <bits/stdc++.h>
typedef long long ll;
const std::string el = "\n";
const std::string yes = "YES";
const std::string no = "NO";
const int MAX = (int)(1e9 + 7);
const int MIN = (int)(-1);
const int DIVISOR = (int)(1e6 + 1);
using namespace std;

ll a, b, h;
ll dp[20][2][200];

bool check(int x)
{
    if (x == h)
        return true;
    else
        return false;
}

int digit_dp(string ss)
{
    int n = ss.size();

    dp[n][0][0] = 1;
    dp[n][1][0] = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        for (int tight = 0; tight < 2; tight++)
        {
            for (int sum = 0; sum < 200; sum++)
            {
                if (tight)
                {
                    for (int d = 0; d <= ss[i] - '0'; d++)
                    {
                        dp[i][1][sum] += (d == ss[i] - '0') ? dp[i + 1][1][sum - d] : dp[i + 1][0][sum - d];
                    }
                }
                else
                {
                    for (int d = 0; d < 10; d++)
                    {
                        dp[i][0][sum] += dp[i + 1][0][sum - d];
                    }
                }
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < 200; i++)
    {
        if (check(i))
            ans += dp[0][1][i];
    }
    return ans;
}

void reset_dp()
{
    for (int i = 0; i < 20; i++)
        for (int j = 0; j < 2; j++)
            for (int k = 0; k < 200; k++)
                dp[i][j][k] = 0;
}
int main()
{
    freopen("CHUSO.inp", "r", stdin);
    freopen("CHUSO.out", "w", stdout);
    cin >> a >> b >> h;
    int countA = digit_dp(to_string(a - 1));
    reset_dp();
    int countB = digit_dp(to_string(b));
    reset_dp();
    cout << countB - countA << endl;
}