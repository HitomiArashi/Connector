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

vector <ll> Fibo = {1, 1};

bool Fibonacci(ll num, ll pos)
{
    ll res = (ll)(lower_bound(Fibo.begin() + pos, Fibo.end(), num) - Fibo.begin());
    if (Fibo[res] == num)
        return true;
    else
        return false;
}

int main()
{
    freopen("ILOCZYN.inp", "r", stdin);
    freopen("ILOCZYN.out", "w", stdout);
    while (Fibo[Fibo.size() - 1] + Fibo[Fibo.size() - 2] <= (ll)(1e9))
    {
        Fibo.push_back(Fibo[Fibo.size() - 1] + Fibo[Fibo.size() - 2]);
    }
    int number_of_test;
    cin >> number_of_test;
    cin.ignore();
    while (number_of_test --)
    {
        solve();
    }
    return 0;
}
/*sol*/
inline void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; Fibo[i] * Fibo[i] <= n; i ++)
    {
        if (n % Fibo[i] == 0 && Fibonacci(n / Fibo[i], i) == true)
        {
            cout << yes << el;
            return;
        }
    }
    cout << no << el;
    return;
}