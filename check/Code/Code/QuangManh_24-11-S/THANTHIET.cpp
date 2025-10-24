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
vector <bool> first_set(102, false);
vector <vector <bool> > is_flood(102, first_set);
vector <vector <bool> > is_visit(102, first_set);

ll sum_factor(ll n)
{
    ll sum = 1;
    for (ll i = 2; i * i <= n; i ++)
    {
        if (n % i == 0)
        {
            sum += i + n / i;
            if (i * i == n)
            {
                sum -= i;
            }
        }
    }
    return sum;
}

int main()
{
    freopen("THANTHIET.inp", "r", stdin);
    freopen("THANTHIET.out", "w", stdout);
    ll a, b;
    cin >> a >> b;
    ll cnt = 0;
    for (ll i = a; i <= b; i ++)
    {
        ll friend_ship = sum_factor(i);
        if (sum_factor(friend_ship) == i)
        {
            if (friend_ship <= b && friend_ship > i)
            {
                cnt ++;
            }
        }
    }
    cout << cnt;
    return 0;
}