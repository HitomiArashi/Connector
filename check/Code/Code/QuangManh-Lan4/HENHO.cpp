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

bool cmp (pair <ll, ll> a, pair <ll, ll> b)
{
    if (a.second < b.second)
    {
        return true;
    }
    else if (a.first < b.first)
    {
        return true;
    }
    return false;
}

int main()
{
    freopen("HENHO.inp", "r", stdin);
    freopen("HENHO.out", "w", stdout);
    ll n, m;
    cin >> n >> m;
    vector <pair <ll, ll> > ways(m);
    for (ll i = 0ll, a, b; i < m; i ++)
    {
        cin >> a >> b;
        ways[i] = {a, b};
    }
    sort(ways.begin(), ways.end(), cmp);
    vector <ll> total_ways(n + 1, 0ll);
    total_ways[1] = 1ll;
    for (int i = 0; i < m; i ++)
    {
        total_ways[ways[i].second] = (total_ways[ways[i].second] + (total_ways[ways[i].first] % MAX)) % MAX;
    }
    cout << total_ways[n];
    return 0;
}