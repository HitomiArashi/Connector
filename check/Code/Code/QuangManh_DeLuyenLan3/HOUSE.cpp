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
    freopen("HOUSE.inp", "r", stdin);
    freopen("HOUSE.out", "w", stdout);
    ll n;
    cin >> n;
    string s;
    cin >> s;
    s += '0';
    vector <ll> compress;
    ll cnt = 1;
    for (int i = 1; i < s.size(); i ++)
    {
        if (s[i] != s[i - 1])
        {
            compress.push_back(cnt);
            cnt = 1;
        }
        else
        {
            cnt ++;
        }
    }
    ll res = 0;
    for (auto &x: compress)
    {
        res += x / 2;
    }
    cout << res;
    return 0;
}
/*sol*/