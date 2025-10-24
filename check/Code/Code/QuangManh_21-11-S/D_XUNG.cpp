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
string s;
int main()
{
    freopen("D_XUNG.inp", "r", stdin);
    freopen("D_XUNG.out", "w", stdout);
    getline(cin, s);
    int number_of_test;
    cin >> number_of_test;
    cin.ignore();
    while (number_of_test --)
    {
        solve();
    }
    return 0;
}
inline void solve()
{
    ll L, R;
    cin >> L >> R;
    string r = s.substr(L - 1, R - L + 1);
    string v = r;
    reverse(v.begin(), v.end());
    if (v == r)
    {
        cout << "yes" << el;
    }
    else
    {
        cout << "no" << el;
    }
}