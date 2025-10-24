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

int __lcf(int a, int b)
{
    return a * b / __gcd(a, b);
}

int main()
{
    freopen("Tn.inp", "r", stdin);
    freopen("TN.out", "w", stdout);
    int n;
    cin >> n;
    vector <int> num(n);
    for (auto &x: num)
    {
        cin >> x;
    }
    int res = __lcf(num[0], num[1]);
    for (int i = 2; i < n; i ++)
    {
        res = __lcf(res, num[i]);
    }
    cout << res << el;
    for (int i = 0; i < n; i ++)
    {
        cout << res / num[i] << " ";
    }
    return 0;
}
/*sol*/