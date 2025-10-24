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
    freopen("somayman.inp", "r", stdin);
    freopen("somayman.out", "w", stdout);
    vector <pair<int, int> > res;
    for (int i = 0; i <= 1000; i ++)
    {
        res.push_back({i, 0});
    }
    ll n;
    cin >> n;
    for (int i = 0, a; i < n; i ++)
    {
        cin >> a;
        res[a].second ++;
    }
    ll cnt = MAX;
    vector <int> ans;
    for (int i = 0; i < 1000; i ++)
    {
        if (res[i].second == 0)
        {
            continue;
        }
        else
        {
            if (res[i].second < cnt)
            {
                cnt = res[i].second;
                ans.clear();
                ans.push_back(res[i].first);
            }
            else if (res[i].second == cnt)
            {
                ans.push_back(res[i].first);
            }
        }
    }
    for (auto &x: ans)
    {
        cout << x << el;
    }
    return 0;
}
/*sol*/