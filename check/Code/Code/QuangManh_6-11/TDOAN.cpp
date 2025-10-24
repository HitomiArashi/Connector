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
    int n, k;
    cin >> n >> k;
    vector <int> num(n), prefix(n + 1, 0);
    for (int i = 0; i < n; i ++)
    {
        cin >> num[i];
        prefix[i + 1] = prefix[i] + num[i];
    }
    int i = 0, j = 1;
    int pos = MIN, res = MAX;
    while (i != j)
    {
        int cur = prefix[j] - prefix[i];
        if (cur > k)
        {
            i ++;
            if (i == j)
                j ++;
        }
        else if (cur < k)
        {
            if (j == n)
            {
                i ++;
            }
            else
            {
                j ++;
            }
        }
        else if (cur == k)
        {
            int l = j - i;
            if (l < res)
            {
                res = l;
                pos = i;
            }
            i ++;
        }
    }
    if (pos != MIN && res != MIN)
        cout << pos + 1 << " " << res;
    else
        cout << 0;
    return 0;
}
/*sol*/