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
    freopen("practice.inp", "r", stdin);
    freopen("practice.out", "w", stdout);
    ll n, c;
    cin >> n >> c;
    vector <pair <int, int> > test;
    for (int i = 0, a, b; i < n; i ++)
    {
        cin >> a >> b;
        test.push_back({a, b});
    }
    test.push_back({100001, 1});
    sort(test.begin(), test.end());
    for (int i = 0; c >= test[i].first; i ++)
    {
        c += test[i].second;
        if (c < test[i + 1].first)
        {
            cout << i + 1;
            return 0;
        }
    }
    return 0;
}
/*sol*/
