#include <bits/stdc++.h>
typedef long long ll;
const std::string el = "\n";
const std::string yes = "YES";
const std::string no = "NO";
const int MAX = (int)(1e9 + 7);
const int MIN = (int)(-1);
const int DIVISOR = (int)(1e6 + 1);
using namespace std;

inline void solve();

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("BOBA.inp", "r", stdin);
    freopen("BOBA.out", "w", stdout);
    int n, S;
    cin >> n >> S;
    int res = 0;
    for (int i = 0; i <= n; i ++)
    {
        for (int j = 0; j <= n; j ++)
        {
            if (S - i - j >= 0 && S - i - j <= n)
            {
                res ++;
            }
        }
    }
    cout << res;
    return 0;
}
/*sol*/