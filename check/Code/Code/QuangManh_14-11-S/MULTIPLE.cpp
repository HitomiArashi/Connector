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
    int n, q, ans = 1, lt = 1;
    cin >> n >> q;
    const int base = 2023;
    for (int i = 1; i < n; i ++)
    {
        lt = (lt * q) % base;
        ans = (ans + lt) % base;
    }
    cout << ans;
    return 0;
}
/*sol*/