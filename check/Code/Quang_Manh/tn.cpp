#include <bits/stdc++.h>
typedef long long ll;
const std::string el = "\n";
const std::string yes = "YES";
const std::string no = "NO";
const int MAX = (int)(1e9 + 7);
const int MIN = (int)(-1);
const int DIVISOR = (int)(1e6 + 1);
using namespace std;

template <typename T>
auto __lcm(T a, T b)
{
    return a * b / __gcd(a, b);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tn.inp", "r", stdin);
    freopen("tn.out", "w", stdout);

    int n;
    cin >> n;
    vector<int> num(n);
    int res = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
        res = __lcm(num[i], res);
    }
    cout << res << el;
    for (auto &&i : num)
    {
        cout << res / i << " ";
    }

    return 0;
}