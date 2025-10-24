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
    int n;
    cin >> n;
    float max_x = MIN, min_x = MAX, max_y = MIN, min_y = MAX;
    for (int i = 0; i < n; i ++)
    {
        float a, b;
        cin >> a >> b;
        max_x = max(max_x, a);
        min_x = min(min_x, a);
        max_y = max(max_y, b);
        min_y = min(min_y, b);
    }
    cout << fixed << setprecision(3);
    cout << (max_x - min_x) * (max_y - min_y);
    return 0;
}
/*sol*/