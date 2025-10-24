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
    freopen("THONGKE.inp", "r", stdin);
    freopen("THONGKE.out", "w", stdout);
    ll n;
    cin >> n;
    vector <int> count_F0(n, 0);
    for (int i = 0; i < n; i ++)
    {
        int cnt = 0;
        string s;
        cin >> s;
        for (int j = 0; j < s.size(); j ++)
        {
            if (s[j] >= '0' && s[j] <= '9')
            {
                cnt = cnt * 10 + (int)(s[j] - '0');
            }
            else
            {
                count_F0[i] += cnt;
                cnt = 0;
                j += 2;
            }
        }
    }
    cout << *max_element(count_F0.begin(), count_F0.end()) << el;
    for (int i = 0; i < n; i ++)
    {
        cout << count_F0[i] << el;
    }
    return 0;
}
/*sol*/