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
    int n;
    cin >> n;
    vector <ll> num(n);
    for (int i = 0; i < n; i ++)
    {
        cin >> num[i];
    }
    ll res = 0;
    for (int i = 0; i < n; i ++)
    {
        for (int j = i + 1; j < n; j ++)
        {
            res += *max_element(num.begin() + i, num.begin() + j + 1) - *min_element(num.begin() + i, num.begin() + j + 1);
        }
    }
    cout << res;
    return 0;
}
/*sol*/ 