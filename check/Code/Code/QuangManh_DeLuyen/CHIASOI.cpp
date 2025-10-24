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

bool check(ll n, ll r, ll num[], ll k)
{
    ll cnt = 0, sum = 0;
    for (int i = 0; i < r; i ++)
    {
        if (num[i] > n)
            return false;
        if (sum > n)
        {
            cnt ++;
            sum = num[i];
        }
    }
    cnt ++;
    if (cnt > k)
        return true;
    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CHIASOI.inp", "r", stdin);
    freopen("CHIASOI.out", "w", stdout);
    ll n, k;
    cin >> n >> k;
    ll num[n];
    ll sum = 0;
    for (int i = 0; i < n; i ++)
    {
        cin >> num[i];
        sum += num[i];
    }
    ll* max_pos = max_element(num, num + n);
    ll pos = *max_pos;
    ll ans = 0;

    while (pos <= sum)
    {
        ll mid = (pos + sum) / 2;
        if (check(mid, n, num, k))
        {
            ans = mid;
            sum = mid - 1;
        }
        else
        {
            pos = mid + 1;
        }
    }
    cout << ans;
    return 0;
}
/*sol*/