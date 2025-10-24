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

int reverse(int n)
{
    int res = 0;
    while (n > 0)
    {
        res = res * 10 + n % 10;
        n /= 10;
    }
    return res;
}

int main()
{
    freopen("PalindNum.inp", "r", stdin);
    freopen("PalindNum.out", "w", stdout);
    ll n;
    cin >> n;
    ll _n = reverse(n);
    if (n == _n)
        cout << yes;
    else
        cout << no;
    return 0;
}
/*sol*/