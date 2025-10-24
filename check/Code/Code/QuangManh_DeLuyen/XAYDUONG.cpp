#include <bits/stdc++.h>
typedef long long ll;
const std::string el = "\n";
const std::string yes = "YES";
const std::string no = "NO";
const int MAX = (int)(1e9 + 7);
const int MIN = (int)(-1);
const int MAX_ARRAY = (int)(1e6 + 1);
using namespace std;

ll n, ans = (ll)(1e18), x[MAX_ARRAY], d[MAX_ARRAY];
pair <ll, ll> a[MAX_ARRAY];

void save()
{
    ll sum = 0;
    for (int i = 1; i < n; i ++)
    {
        sum += min (abs(a[x[i]].first - a[x[i + 1]].first), 
                    abs(a[x[i]].second - a[x[i + 1]].second));
        ans = min(ans, sum);
    }
}

void solve(int k)
{
    for (int i = 1; i <= k; i ++)
    {
        if (d[i] == 0)
        {
            x[k] = i;
            d[i] = 1;
            if (k == n)
            {
                save();
            }
            else
            {
                solve(k + 1);
            }
            d[i] = 0;
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("XAYDUONG.inp", "r", stdin);
    freopen("XAYDUONG.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i ++)
    {
        cin >> a[i].first >> a[i].second;
    }
    solve(1);
    cout << ans;
    return 0;
}
