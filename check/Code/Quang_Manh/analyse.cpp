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
vector < int > eratosthenes_sieve(int max_value)
{
    vector < bool > is_prime(max_value + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= max_value; ++i)
        if (is_prime[i])
            for (int j = i * i; j <= max_value; j += i)
                is_prime[j] = false;

    vector < int > primes;
    for (int i = 2; i <= max_value; ++i)
        if (is_prime[i])
            primes.push_back(i);

    return primes;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ANALYSE.inp", "r", stdin);
    freopen("ANALYSE.out", "w", stdout);
    
    int n;
    cin >> n;
    vector <int> prime = eratosthenes_sieve(n);
    vector <int> cnt(prime.size(), 0);
    for (int i = 2; i <= n; i ++)
    {
        int s = i;
        for (int j = 0; j < prime.size(); j ++)
        {
            while (s % prime[j] == 0)
            {
                s /= prime[j];
                cnt[j] ++;
            }
        }
    }
    while (cnt.back() == 0)
    {
        cnt.pop_back();
    }
    for (int i = 0; i < cnt.size(); i ++)
    {
        cout << cnt[i] << " ";
    }
}