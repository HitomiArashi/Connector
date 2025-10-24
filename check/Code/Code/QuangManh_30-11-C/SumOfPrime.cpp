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
    freopen("SumOfPrime.inp", "r", stdin);
    freopen("SumOfPrime.out", "w", stdout);
    vector <int> res = {2, 3, 5, 7, 11, 101, 131, 151, 181, 191, 313, 353, 373, 383, 727, 757, 787, 797, 919, 929};
    int t;
    cin >> t;
    while (t --)
    {
        int l, r;
        cin >> l >> r;
        r = (upper_bound(res.begin(), res.end(), r) - res.begin());
        l = (lower_bound(res.begin(), res.end(), l) - res.begin());
        int ans = 0;
        for (int i = l; i < r; i ++)
        {
            ans += res[i];
        }
        cout << ans << el;
    }
    return 0;
}
/*sol*/