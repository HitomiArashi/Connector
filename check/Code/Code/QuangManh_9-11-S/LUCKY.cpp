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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("LUCKY.inp", "r", stdin);
    freopen("LUCKY.out", "w", stdout);
    int n;
    cin >> n;
    vector <ll> num(n);
    for (auto &x: num)
        cin >> x;
    sort(num.begin(), num.end());
    int q;
    cin >> q;
    for (int i = 0, x; i < q; i ++)
    {
        cin >> x;
        int front = (int)(lower_bound(num.begin(), num.end(), x) - num.begin());
        int back = (int)(upper_bound(num.begin(), num.end(), x) - num.begin());
        cout << back - front << el;
    }
    return 0;
}
/*sol*/