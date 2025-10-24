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
    ll n, res = 0;
    cin >> n;
    vector <ll> num(n + 1, MAX), prefix(n + 2, 0);
    for (int i = 1; i <= n; i ++)
    {
        cin >> num[i];
        res += num[i] * i;
        prefix[i + 1] = prefix[i] + num[i];
    }
    int pos_min = min_element(num.begin() + 1, num.end()) - num.begin();
    int pos_max = max_element(num.begin() + 1, num.end()) - num.begin();
    int move_min = res - (num[pos_min] * pos_min) + (prefix[pos_min] - prefix[1]) + num[pos_min] * 1;
    int move_max = res - (num[pos_max] * pos_max) - (prefix.back() - prefix[pos_max]) + num[pos_max] * n;
    cout << max(move_min, move_max);
    return 0;
}
/*sol*/