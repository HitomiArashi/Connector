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
    freopen("ATM.inp", "r", stdin);
    freopen("ATM.out", "w", stdout);
    ll n, S;
    cin >> n >> S;
    vector <ll> m(n);
    for (auto &x: m)
    {
        cin >> x;
    }
    sort(m.rbegin(), m.rend());
    ll res = 0;
    for (auto x: m)
    {
        if (S % x < m.back() and S % x != 0)
        {
            continue;
        }
        else
        {
            res += S / x;
            S %= x;
        }
    }
    cout << res;
    return 0;
}
/*sol*/