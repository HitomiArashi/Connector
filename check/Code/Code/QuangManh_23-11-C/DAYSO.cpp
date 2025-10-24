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
    freopen("DAYSO.inp", "r", stdin);
    freopen("DAYSO.out", "w", stdout);
    ll n, k;
    cin >> n >> k;
    vector <int> prefix = {0};
    for (int i = 0, a; i < n; i ++)
    {
        cin >> a;
        prefix.push_back(a + prefix[i]);
    }
    int cnt = 0;
    for (int i = 0; i < n; i ++)
    {
        for (int j = i + 1; j <= n; j ++)
        {
            if (abs(prefix[j] - prefix[i]) > k)
                cnt ++;
        }
    }
    cout << cnt;
    return 0;
}
/*sol*/
