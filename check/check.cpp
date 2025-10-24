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
    clock_t start = clock();
    /*Code*/
    // freopen("check.inp", "r", stdin);
    // freopen("check.out", "w", stdout);

    int number_of_test;
    cin >> number_of_test;
    cin.ignore();
    while (number_of_test --)
    {
        solve();
    }

    return 0;
    clock_t finish = clock();
    cout << el << "Time run: " << (float)(finish - start) / CLOCKS_PER_SEC << " s";
    return 0;
}
/*sol*/
inline void solve()
{
    int n;
    cin >> n;
    if (n % 4 == 0)
    {
        cout << n / 4;
    }
    else
    {
        cout << n / 4 + 1;
    }
    cout << el;
}

//Update for testing
