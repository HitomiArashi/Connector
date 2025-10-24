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

const int N = (int)(1e7);
ll factor[N] = {1};

int main()
{
    freopen("CPDB.inp", "r", stdin);
    freopen("CPDB.out", "w", stdout);
    for (int i = 2; i * i <= N; i ++)
    {
        for (int j = i; j <= N; j += i)
        {
            factor[j] ++;
        }
    }
    ll a, b;
    cin >> a >> b;
    a = a + 3 - a % 3;
    ll cnt = 0;
    for (int i = a; i <= b; i += 3)
    {
        if (factor[i] == 9)
            cnt ++;
    }
    cout << cnt;
    return 0;
}
/*sol*/