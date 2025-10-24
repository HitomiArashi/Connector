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
    freopen("PASS.inp", "r", stdin);
    freopen("PASS.out", "w", stdout);
    string s;
    cin >> s;
    int res = 0;
    for (auto &x: s)
    {
        res += x - '0';
    }
    cout << res;
    return 0;
}
/*sol*/