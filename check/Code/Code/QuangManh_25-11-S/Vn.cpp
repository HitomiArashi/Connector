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
    freopen("Vn.inp", "r", stdin);
    freopen("Vn.out", "w", stdout);
    ll a, b;
    cin >> a >> b;
    if (a > b)
    {
        swap (a, b);
    }
    ll res = __gcd(a, b);
    cout << res << el << a / res << " " << b / res;
    return 0;
}
/*sol*/