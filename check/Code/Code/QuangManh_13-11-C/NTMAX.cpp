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

bool check (ll n)
{
    if (n < 2)
    {
        return false;
    }
    else if (n < 4)
    {
        return true;
    }
    else
    {
        for (int i = 2; i * i <= n; i ++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}

int main()
{
    string s;
    cin >> s;
    s += 'a';
    ll cnt = 0;
    ll res = 0;
    ll cur = 0;
    for (int i = 0; i < s.size(); i ++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            cnt ++;
            cur = cur * 10 + (int)(s[i] - '0');
        }
        else
        {
            if (check(cur) == true && cur > res)
            {
                res = cur;
            }
            cur = 0;
        }
    }
    cout << cnt << el << res;
    return 0;
}
/*sol*/