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
    freopen("BSET.inp", "r", stdin);
    freopen("BSET.out", "w", stdout);
    ll n, m;
    cin >> n >> m;
    vector <int> a(n), b(m);
    for (int i = 0; i < n; i ++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i ++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    int giao = 0, hop = 0;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            i ++; j ++;
            giao ++;
        }
        else if (a[i] < b[j])
        {
            i ++;
        }
        else
        {
            j ++;
        }
        hop ++;
    }
    if (i != n - 1)
    {
        hop += n - i;
    }
    if (j != m - 1)
    {
        hop += m - j;
    }
    cout << hop << " " << giao;
    return 0;
}
/*sol*/