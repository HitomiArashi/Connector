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

bool check(int n)
{
    if (n < 2)
    {
        return false;
    }
    if (n < 4)
    {
        return true;
    }
    for (int i = 2; i * i <= n; i ++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, cnt = 0, res = 0, pos = -1;
    cin >> n;
    for (int i = 0, a; i < n; i ++)
    {
        cin >> a;
        if (check(a) == true)
        {
            cnt ++;
            if (a > res)
            {
                res = a;
                pos = i + 1;
            }
        }
    }
    if (cnt == 0)
    {
        cout << "khong co";
    }
    else
    {
        cout << cnt << " " << res << " " << pos;
    }
    return 0;
}
/*sol*/