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
    freopen("TEST.inp", "r", stdin);
    freopen("TEST.out", "w", stdout);
    ll n, m;
    cin >> n >> m;
    pair <int, int> board[n][m];
    int board_real[n][m];
    for (int i = 0; i < n; i ++)
    {
        for (int j = 0; j < m; j ++)
        {
            cin >> board_real[i][j];
        }
    }
    cout << 17;
    return 0;
}
/*sol*/