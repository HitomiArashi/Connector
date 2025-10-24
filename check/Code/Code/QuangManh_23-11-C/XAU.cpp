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

ll sum_factor(ll n)
{
    ll res = 0;
    for (ll i = 1; i * i <= n; i ++)
    {
        if (n % i == 0)
        {
            res += i + n / i;
        }
        if (i * i == n)
        {
            res -= i;
        }
    }
    return res;
}

int main()
{
    freopen("XAU.inp", "r", stdin);
    freopen("XAU.out", "w", stdout);
    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < s.size(); i ++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = (char)(s[i] + 'A' - 'a');
        }
    }
    sort(s.begin(), s.end());
    s += '0';
    int pos = 0, res = 0, cnt = 0;
    for (int i = 1; i < s.size(); i ++)
    {
        if (s[i] != s[i - 1])
        {
            res += (i - pos) * (i - pos + 1) / 2;
            pos = i;
            cnt ++;
        }
    }
    if (res % n == 0)
    {
        cout << res;
    }
    else
    {
        cout << cnt;
    }
    return 0;
}
/*sol*/
