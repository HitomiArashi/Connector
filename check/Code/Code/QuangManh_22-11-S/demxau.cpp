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
bool check_Palindrome(string s)
{
    string v = s;
    reverse(s.begin(), s.end());
    if (s == v)
        return true;
    else
        return false;
}

int main()
{
    freopen("demxau.inp", "r", stdin);
    freopen("demxau.out", "w", stdout);
    string s;
    cin >> s;
    int sz = s.size();
    s = s + s;
    int i = 0;
    int cnt = 0;
    while (i < sz)
    {
        if (check_Palindrome(s.substr(i, sz)))
        {
            cnt ++;
        }
        i ++;
    }
    cout << cnt;
    return 0;
}
/*sol*/