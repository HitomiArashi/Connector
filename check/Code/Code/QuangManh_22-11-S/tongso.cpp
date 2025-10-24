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
    freopen("tongso.inp", "r", stdin);
    freopen("tongso.out", "w", stdout);
    ll a, b, m;
    cin >> a >> b >> m;
    a = a + m - a % m;
    b = b - b % m;
    cout << (b / m - a / m + 1) * (a + b) / 2;
    return 0;
}
/*sol*/