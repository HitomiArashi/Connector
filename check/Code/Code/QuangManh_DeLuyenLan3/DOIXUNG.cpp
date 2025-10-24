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
    freopen("DOIXUNG.inp", "r", stdin);
    freopen("DOIXUNG.out", "w", stdout);
    int number_of_test;
    cin >> number_of_test;
    cin.ignore();
    while (number_of_test --)
    {
        solve();
    }
    return 0;
}
inline void solve()
{
    ll n;
    cin >> n;
    vector <ll> num(n);
    for (auto &x: num)
    {
        cin >> x;
    }
    for (ll i = 0; i * 2 < n; i ++)
    {
        ll pos;
        if (num[i + 1] == num[i])
        {
            pos = min (n, find(num.begin() + i + 2, num.end(), num[i]) - num.begin());
        }
        else
        {
            pos = min (n, find(num.begin() + i + 1, num.end(), num[i]) - num.begin());
        }
        if (num[pos] != num[i])
        {
            continue;
        }
        else if (pos == i || pos == i + 1)
        {
            continue;
        }
        else
        {
            cout << "YES" << el;
            return;
        }
    }
    cout << "NO" << el;
    return;
}