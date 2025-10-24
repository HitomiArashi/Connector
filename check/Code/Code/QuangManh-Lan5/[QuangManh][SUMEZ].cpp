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

vector <int> prefix = {0};

int main()
{
    freopen("SUMEZ.inp", "r", stdin);
    freopen("SUMEZ.out", "w", stdout);
    ll n, m;
    cin >> n >> m;
    for (int i = 0, a; i < n; i ++)
    {
        cin >> a;
        prefix.push_back(prefix[i] + a);
    }
    for (int i = 0; i < m; i ++)
    {
        solve();
    }
    return 0;
}
inline void solve()
{
    ll l, r;
    cin >> l >> r;
    cout << prefix[r] - prefix[l - 1] << el;
}