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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("BZERO.inp", "r", stdin);
    freopen("BZERO.out", "w", stdout);
    
    int n;
    cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i ++)
    {
        int s = i;
        while (s % 5 == 0)
        {
            res ++;
            s /= 5;
        }
    }
    cout << res;
    return 0;
}
/*sol*/