#include <bits/stdc++.h>
typedef long long ll;
const std::string el = "\n";
const std::string yes = "YES";
const std::string no = "NO";
const int MAX = (int)(1e9 + 7);
const int MIN = (int)(-1);
const int DIVISOR = (int)(1e6 + 1);
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Vn.inp", "r", stdin);
    freopen("Vn.out", "w", stdout);
    
    ll n, m;
    cin >> n >> m;
    ll res = __gcd(n, m);
    cout << res << el;
    cout << n / res << " " << m / res;
    return 0;
}