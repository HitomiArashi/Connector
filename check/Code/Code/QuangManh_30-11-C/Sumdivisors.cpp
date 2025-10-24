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
    freopen("Sumdivisors.inp", "r", stdin);
    freopen("Sumdivisors.out", "w", stdout);
    vector <int> sum_prime(10001, 0);
    for (int i = 1; i <= sum_prime.size(); i ++)
    {
        for (int j = i; j <= sum_prime.size(); j += i)
        {
            sum_prime[j] += i;
        }
    }
    int t;
    cin >> t;
    while (t --)
    {
        int n; cin >> n;
        int res = 0;
        for (int i = 1; i <= n; i ++)
        {
            if (n % i == 0)
            {
                res += sum_prime[i];
            }
        }
        cout << res << el;
    }
    return 0;
}
/*sol*/