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
    freopen("THAMQUAN.inp", "r", stdin);
    freopen("THAMQUAN.out", "w", stdout);
    ll n, m;
    cin >> n >> m;
    vector <int> bus(n), guest(m), prefix(n + 1);
    for (int i = 0; i < n; i ++)
    {
        cin >> bus[i];
        prefix[i + 1] = prefix[i] + bus[i];
    }
    for (int i = 0; i < m; i ++)
    {
        cin >> guest[i];
        cout << (int)(upper_bound(prefix.begin(), prefix.end(), guest[i]) - prefix.begin()) - 1 << " ";
    }
    return 0;
}
/*sol*/