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

int total_digit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

vector <bool> check_prime(DIVISOR, true);
vector <int> prime;

int main()
{
    freopen("sprime.inp", "r", stdin);
    freopen("sprime.out", "w", stdout);
    check_prime[0] = false;
    check_prime[1] = false;
    for (int i = 0; i * i <= DIVISOR; i ++)
    {
        if (check_prime[i] == true)
        {
            for (int j = i * i; j <= DIVISOR; j += i)
            {
                check_prime[j] = false;
            }
        }
    }
    for (int i = 0; i <= DIVISOR; i ++)
    {
        if (check_prime[i])
        {
            prime.push_back(i);
        }
    }
    int number_of_test;
    cin >> number_of_test;
    cin.ignore();
    while (number_of_test --)
    {
        solve();
    }
    return 0;
}
/*sol*/
inline void solve()
{
    int a, b;
    cin >> a >> b;
    int l = (int)(lower_bound(prime.begin(), prime.end(), a) - prime.begin()), r = (int)(upper_bound(prime.begin(), prime.end(), b) - prime.begin());
    int cnt = 0;
    for (int i = l; i < r; i ++)
    {
        if (total_digit(prime[i]) % 5 == 0)
        {
            cnt ++;
        }
    }
    cout << cnt << el;
}