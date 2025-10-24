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
    ll n, x, y, z;
    cin >> n >> x >> y >> z;
    for (int i = 0; i < n - (x + y); i ++)
    {
        cout << (char)('0' + (i % 2));
    }
    for (int i = 0; i < x; i ++)
    {
        cout << (char)('A' + (i % 2));
    }
    for (int i = 0; i < y; i ++)
    {
        cout << (char)('a' + (i % 2));
    }
}
/*sol*/