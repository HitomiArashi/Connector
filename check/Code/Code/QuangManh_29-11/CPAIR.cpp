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
    freopen("CPAIR.inp", "r", stdin);
    freopen("CPAIR.out", "w", stdout);
    ll n, s;
    cin >> n >> s;
    ll cnt[1001] = {0};
    for (int i = 0, a; i < n; i ++)
    {
        cin >> a;
        cnt[a] ++;
    }
    ll res = 0;
    for (int i = 1; i <= s / 2; i ++)
    {
        if (i + i == s)
            res += cnt[i] * (cnt[i] - 1) / 2;
        else
            res += cnt[i] * cnt[s - i];
    }
    cout << res;
    return 0;
}
/*sol*/