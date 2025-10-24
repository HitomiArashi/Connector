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
    freopen("UCLN.inp", "r", stdin);
    freopen("UCLN.out", "w", stdout);
    ll n;
    cin >> n;
    vector <ll> num(n);
    for (auto &x: num)
    {
        cin >> x;
    }
    ll res = 0;
    for (ll i = 1; i < n; i ++)
    {
        res = max(res, __gcd(num[i], num[i - 1]));
    }
    cout << res;
}
/*sol*/