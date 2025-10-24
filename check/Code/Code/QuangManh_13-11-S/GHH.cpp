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
    vector <int> sum_prime(DIVISOR, 0);
    for (int i = 1; i < DIVISOR; i ++)
    {
        for (int j = i; j < DIVISOR; j += i)
        {
            sum_prime[j] += i;
        }
    }
    int n;
    cin >> n;
    for (int i = 0, a; i < n; i ++)
    {
        cin >> a;
        if (sum_prime[a] >= a * 2)
        {
            cout << 1 << el;
        }
        else
        {
            cout << 0 << el;
        }
    }
    return 0;
}
/*sol*/