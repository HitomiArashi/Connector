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
    freopen("MOVE.inp", "r", stdin);
    freopen("MOVE.out", "w", stdout);
    ll m, n;
    cin >> m >> n;
    ll a[m+1][n+1], dp[m+1][n+1];
    for(int i = 0; i<m; i++)
    {
        for(int j =0;j<n; j++)
            cin >> a[i][j];
    }
    dp[0][0] = a[0][0];
    for(int i = 1; i < m; i++)
    {
        dp[i][0] = dp[i-1][0] + a[i][0];
    }
    for(int j = 1; j < n; j++)
    {
        dp[0][j] = dp[0][j-1] + a[0][j];
    }
    for(int i = 1; i < m; i++)
    {
        for(int j = 1; j < n; j++) 
            dp[i][j] = max(dp[i-1][j], dp[i][j-1]) + a[i][j];
    }
    cout << dp[m-1][n-1];
    return 0;
}
/*sol*/