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
    freopen("BMARKET.inp", "r", stdin);
    freopen("BMARKET.out", "w", stdout);
    
    ll y, n, k;
    cin >> y >> n >> k;
    if (y > n)
    {
        cout << -1;
        return;
    }

    ll res = k - y % k;
    while (res + y < n)
    {
        cout << res << " ";
        res += k;
    }
    return 0;
}
/*sol*/