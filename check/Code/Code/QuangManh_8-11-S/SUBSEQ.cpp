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
    int n, k, res = 0, cnt = 0;
    cin >> n >> k;
    for (int i = 0, a; i < n; i ++)
    {
        cin >> a;
        if (a % k == 0)
        {
            cnt ++;
        }
        else
        {
            res = max(res, cnt);
            cnt = 0;
        }
    }
    return 0;
}
/*sol*/