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

bool check_Palindrome(string s)
{
    string v = s;
    reverse(s.begin(), s.end());
    if (s == v)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    freopen("TRANGSUC.inp", "r", stdin);
    freopen("TRANGSUC.out", "w", stdout);
    string s;
    cin >> s;
    ll n = s.size();
    s += s;
    ll cnt = 0;
    for (int i = 0; i < n; i ++)
    {
        if (check_Palindrome(s.substr(i, n)))
        {
            cnt ++;
        }
    }
    cout << cnt;
    return 0;
}