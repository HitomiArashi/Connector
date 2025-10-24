#include <bits/stdc++.h>
typedef long long ll;
const std::string el = "\n";
const std::string yes = "YES";
const std::string no = "NO";
const ll MAX = (ll)(1e9 + 7);
const ll MIN = (ll)(-1);
const ll DIVISOR = (ll)(1e6 + 1);
using namespace std;

inline void solve();

bool cmp (pair <int, int> a, pair <int, int> b)
{
    if (a.first < b.first)
    {
        return true;
    }
    else if (a.second > b.second)
    {
        return true;
    }
    return false;
}

int main()
{
    freopen("JOB.inp", "r", stdin);
    freopen("JOB.out", "w", stdout);
    int n;
    cin >> n;
    vector <pair <int, int> > works(n);
    for (int i = 0, a, b; i < n; i ++)
    {
        cin >> a >> b;
        works[i] = {a, b};
    }
    sort(works.begin(), works.end(), cmp);
    int time = 1;
    int money_made = 0;
    for (int i = 0; i < n; i ++)
    {
        if (time <= works[i].first)
        {
            time ++;
            money_made += works[i].second;
        }
        else
        {
            continue;
        }
    }
    cout << money_made;
    return 0;
}