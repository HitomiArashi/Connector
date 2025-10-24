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
    freopen("FindNum.inp", "r", stdin);
    freopen("FindNum.out", "w", stdout);
    vector <bool> check_prime(50000, true);
    check_prime[0] = false; check_prime[1] = false;
    for (int i = 2; i * i <= check_prime.size(); i ++)
    {
        if (check_prime[i] == true)
        {
            for (int j = i * i; j <= check_prime.size(); j += i)
            {
                check_prime[j] = false;
            }
        }
    }
    vector <int> prime;
    for (int i = 0; i < check_prime.size(); i ++)
    {
        if (check_prime[i] == true)
        {
            prime.push_back(i);
        }
    }
    int a, b;
    cin >> a >> b;
    cout << *upper_bound(prime.begin(), prime.end(), a + b) - (a + b);
    return 0;
}
/*sol*/