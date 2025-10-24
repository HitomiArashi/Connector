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
    ll n;
    cin >> n;
    vector <ll> pos_a, neg_a, pos_b, neg_b;
    for (ll i = 0, a; i < n; i ++)
    {
        cin >> a;
        if (a < 0)
        {
            neg_a.push_back(abs(a));
        }
        else
        {
            pos_a.push_back(abs(a));
        }
    }
    for (ll i = 0, b; i < n; i ++)
    {
        cin >> b;
        if (b < 0)
        {
            neg_b.push_back(abs(b));
        }
        else
        {
            pos_b.push_back(abs(b));
        }
    }
    sort(pos_a.begin(), pos_a.end());
    sort(pos_b.begin(), pos_b.end());
    sort(neg_a.begin(), neg_a.end());
    sort(neg_b.begin(), neg_b.end());
    ll res = MAX;
    if (neg_b.size() == 0)
    {
        res = min(res, pos_a[0] + pos_b[0]);
    }
    else
    {
        for (int i = 0, pos; i < pos_a.size(); i ++)
        {
            pos = max(0ll, min((ll)(neg_b.size() - 1), (ll)(upper_bound(neg_b.begin(), neg_b.end(), pos_a[i]) - neg_b.begin())));
            res = min(res, min(abs(pos_a[i] - neg_b[pos]), abs(pos_a[i] - neg_b[max(0, pos - 1)])));
        }
    }

    if (neg_a.size() == 0)
    {
        res = min(res, pos_b[0] + pos_a[0]);
    }
    else
    {
        for (int i = 0, pos; i < pos_b.size(); i ++)
        {
            pos = max(0ll, min((ll)(neg_a.size() - 1), (ll)(upper_bound(neg_a.begin(), neg_a.end(), pos_b[i]) - neg_b.begin())));
            res = min(res, min(abs(pos_b[i] - neg_a[pos]), abs(pos_b[i] - neg_a[max(0, pos - 1)])));
        }
    }

    cout << res;
    return 0;
}
/*sol*/