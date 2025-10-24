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
    freopen("MOD.inp", "r", stdin);
    freopen("MOD.out", "w", stdout);
    ll a, n;
    cin >> a >> n;
    a = a % MAX;
    n = (n * (n + 1)) / 2 % MAX;
    cout << a * n % MAX;
    return 0;
}
/*sol*/