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
    freopen("BAI3.inp", "r", stdin);
    freopen("BAI3.out", "w", stdout);
    int k;
    string s;
    cin >> k >> s;
    for (int i = s.size() - k; i < s.size(); i ++)
    {
        cout << s[i];
    }
    for (int i = 0; i <= k; i ++)
    {
        cout << s[i];
    }
    return 0;
}
/*sol*/