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

ll sum_factor(ll n)
{
    ll res = 0;
    for (ll i = 1; i * i <= n; i ++)
    {
        if (n % i == 0)
        {
            res += i + n / i;
        }
        if (i * i == n)
        {
            res -= i;
        }
    }
    return res;
}

int main()
{
    freopen("TONGUOC.inp", "r", stdin);
    freopen("TONGUOC.out", "w", stdout);
    ll a, b;
    cin >> a >> b;
    cout << max(sum_factor(a), sum_factor(b));
    return 0;
}
/*sol*/
