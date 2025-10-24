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
    ll n, k;
    cin >> n >> k;
    vector <ll> num(n), prefix(n + 1, 0);
    for (int i = 0; i < n; i ++)
    {
        cin >> num[i];
        prefix[i + 1] = prefix[i] + num[i];
    }
    ll i = 0, j = 0;
    ll res = 0;
    while (j != n || prefix[j] - prefix[i] >= k)
    {
        if (i == j)
            j ++;
        else
        {
            if (prefix[j] - prefix[i] < k)
            {
                j ++;
            }
            else
            {
                res = max(res, (prefix[j] - prefix[i]) / (j - i));
                i ++;
            }
        }
    }
    cout << res;
    return 0;
}
/*sol*/