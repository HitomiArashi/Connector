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
    freopen("GCDMAX.inp", "r", stdin);
    freopen("GCDMAX.out", "w", stdout);
    

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
    ll n;
    cin >> n;
    if (n % 2 == 0)
        cout << n / 2;
    else
        cout << (n - 1) / 2;
    cout << el;
}