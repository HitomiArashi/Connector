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
    /*Code*/
    int n;
    cin >> n;
    vector <bool> Era(n + 1, true);
    Era[0] = false;
    Era[1] = false;
    int res = 0;
    for (int i = 0; i <= n; i ++)
    {
        if (Era[i] == true)
        {
            res ++;
        }
        for (int j = i * i; j <= n; j += i)
        {
            Era[j] = false;
        }
    }
    cout << res;
    return 0;
}

/*
Ý tưởng:
+ Đếm số lượng số nguyên tố bé hơn số đã cho (Sàng Eratos)
*/