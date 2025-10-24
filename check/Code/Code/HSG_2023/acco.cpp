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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("acco.inp", "r", stdin);
    freopen("acco.out", "w", stdout);
    ll n;
    cin >> n;
    map <string, int> mp;
    string s;
    while (n --)
    {
        cin >> s;
        if (mp[s] == 0)
        {
            cout << s << el;
        }
        else
        {
            cout << s << mp[s] << el;
        }
        mp[s] ++;
    }
    return 0;
}
inline void solve()
{
    /*Code*/
}