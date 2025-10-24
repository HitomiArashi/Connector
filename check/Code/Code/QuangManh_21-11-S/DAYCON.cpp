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
    freopen("DAYCON.inp", "r", stdin);
    freopen("DAYCON.out", "w", stdout);
    long long n, d;
    cin >> n >> d;
    vector <long long> num(n), prefix(n + 1, 0);
    for (long long i = 0; i < n; i ++)
    {
        cin >> num[i];
        prefix[i + 1] = prefix[i] + num[i];
    }
    ll res = 0;
    for (ll i = 0; i + d < n; i ++)
    {
        res = max(res, prefix[i + d] - prefix[i]);
    }
    cout << res;
}