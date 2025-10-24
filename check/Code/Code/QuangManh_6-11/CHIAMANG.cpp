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
    vector <int> num(n), prefix(n + 1, 0);
    for (int i = 0; i < n; i ++)
    {
        cin >> num[i];
        prefix[i + 1] = prefix[i] + num[i];
    }
    for (int i = 1; i <= n; i ++)
    {
        if (prefix[i] - prefix[0] == prefix[n] - prefix[i])
        {
            cout << i;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
/*sol*/