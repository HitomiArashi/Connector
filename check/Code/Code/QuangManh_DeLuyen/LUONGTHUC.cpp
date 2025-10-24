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

ll vis[1000002];

void dfs(ll a, vector <ll> k[], ll dp[], ll &cnt)
{
    vis[a] = 1;
    for (auto i : k[a])
    {
        if (dp[i] == 1)
        {
            cnt ++;
        }
        else
        {
            if (vis[i] == 0)
            {
                cnt ++;
                dfs(i, k, dp, cnt);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("LUONGTHUC.inp", "r", stdin);
    freopen("LUONGTHUC.out", "w", stdout);
    ll n, m, b, r;
    cin >> n >> m >> b >> r;
    ll a_b[b + 1];
    ll dp[n + 1];
    for (ll i = 1; i <= b; i ++)
    {
        cin >> a_b[i];
        dp[a_b[i]] = 1;
    }
    ll a_r[r + 1];
    for (ll i = 1; i <= r; i ++)
    {
        cin >> a_r[i];
    }
    pair <ll, ll> tp[m];
    vector <ll> k[n];
    for (ll i = 1; i <= m; i ++)
    {
        cin >> tp[i].first >> tp[i].second;
        k[tp[i].first].push_back(tp[i].second);
        k[tp[i].second].push_back(tp[i].first);
    }
    ll cnt = 0;
    for (ll i = 1; i <= r; i ++)
    {
        dfs(a_r[i], k, dp, cnt);
        cout << cnt << " ";
    }
    return 0;
}
/*sol*/