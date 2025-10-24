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

ll sum_digit(ll n)
{
    ll res = 0;
    while (n > 0)
    {
        res += n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    ll N = 1000000;
    vector <bool> prime(N, true);
    prime[0] = false;
    prime[1] = false;
    for (ll i = 2; i * i <= N; i ++)
    {
        if (prime[i] == true)
        {
            for (ll j = i * i; j <= N; j += i)
            {
                prime[j] = false;
            }
        }
    }
    ll n;
    cin >> n;
    ll h;
    cin >> h;
    ll cnt = 0;
    for (ll i = 0; i < n; i ++)
    {
        if (prime[i] == true)
        {
            if (sum_digit(i) == h)
            {
                cout << i << el;
                cnt ++;
            }
        }
    }
    cout << cnt;
    return 0;
}
/*sol*/