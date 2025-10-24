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
    freopen("DCOW.inp", "r", stdin);
    freopen("DCOW.out", "w", stdout);
    ll n;
    cin >> n;
    map <int, int> mp;
    for (int i = 0, a; i < n; i ++)
    {
        cin >> a;
        mp[a] ++;
    }
    ll cnt = 0;
    for (int i = 0; i <= 1000; i ++)
    {
        cnt += max(0, mp[i] * (mp[i] - 1) / 2);
    }
    cout << cnt;
    return 0;
}
/*sol*/