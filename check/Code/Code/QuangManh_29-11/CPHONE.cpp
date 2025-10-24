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
    freopen("CPHONE.inp", "r", stdin);
    freopen("CPHONE.out", "w", stdout);
    ll cnt[1001] = {0};
    ll maxx = 0;
    ll n;
    cin >> n;
    while (n --)
    {
        int a; cin >> a;
        cnt[a] ++;
        maxx = max(maxx, cnt[a]);
    }
    for (ll i = 0; i < 1001; i ++)
    {
        if (cnt[i] == maxx)
        {
            cout << i << el;
        }
    }
    return 0;
}
/*sol*/