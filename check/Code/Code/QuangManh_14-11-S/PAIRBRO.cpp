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
    vector <bool> prime(DIVISOR, true);
    prime[0] = false; prime[1] = false;
    for (ll i = 0; i * i <= DIVISOR; i ++)
    {
        if (prime[i] == true)
        {
            for (ll j = i * i; j <= DIVISOR; j += i)
            {
                prime[j] = false;
            }
        }
    }
    ll n, q;
    cin >> n >> q;
    ll cnt = 0;
    for (ll i = 1; i + q <= n; i ++)
    {
        if (prime[i] == true && prime[i + q] == true)
            cnt ++;
    }
    cout << cnt;
    return 0;
}
/*sol*/