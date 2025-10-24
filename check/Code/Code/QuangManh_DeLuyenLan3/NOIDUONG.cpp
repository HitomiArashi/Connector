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
    freopen("NOIDUONG.inp", "r", stdin);
    freopen("NOIDUONG.out", "w", stdout);
    int number_of_test;
    cin >> number_of_test;
    cin.ignore();
    while (number_of_test --)
    {
        solve();
    }
    return 0;
}
inline void solve()
{
    int n, K;
    cin >> n >> K;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    long long count = 0, sum = 0;
    for (int i = 0, j = 0; i < n; i++) {
        sum += x[i];
        while (sum > K) sum -= x[j++];
        if (i - j + 1 > 1)
        {
            count ++;
        }
    }

    cout << count << "\n";
}