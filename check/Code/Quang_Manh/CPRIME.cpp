#include <bits/stdc++.h>
typedef long long ll;
const std::string el = "\n";
const std::string yes = "YES";
const std::string no = "NO";
const int MAX = (int)(1e9 + 7);
const int MIN = (int)(-1);
const int DIVISOR = (int)(1e6 + 1);
using namespace std;

auto rev (ll num)
{
    ll res = 0LL;
    while (num > 0)
    {
        res = res * 10 + num % 10;
        num /= 10;
    }
    return res;
}

auto prime_check (ll num)
{
    if (num < 2)
        return false;
    if (num < 4)
        return true;
    for (ll i = 2; i * i < num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CPRIME.inp", "r", stdin);
    freopen("CPRIME.out", "w", stdout);

    ll n;
    cin >> n;
    if (prime_check(n) == false || prime_check(rev(n)) == false)
    {
        cout << 0;
    }
    else
    {
        cout << 1;
    }

    return 0;
}
/*sol*/