#include <bits/stdc++.h>
typedef long long ll;
const std::string el = "\n";
const std::string yes = "YES";
const std::string no = "NO";
const ll MAX = (ll)(1e9 + 7);
const ll MIN = (ll)(-1);
const ll DIVISOR = (ll)(1e6 + 1);
using namespace std;

inline void solve();
vector <bool> first_set(102, false);
vector <vector <bool> > is_flood(102, first_set);
vector <vector <bool> > is_visit(102, first_set);

int size_of_pool(int i, int j)
{
    is_visit[i][j] = true;
    if (is_visit[i - 1][j] == true && is_visit[i + 1][j] == true && is_visit[i][j + 1] == true && is_visit[i][j - 1] == true)
    {
        return 1;
    }
    else if (is_flood[i - 1][j] == false && is_flood[i + 1][j] == false && is_flood[i][j + 1] == false && is_flood[i][j - 1] == false)
    {
        return 1;
    }
    else
    {
        int res = 1;
        if (is_visit[i - 1][j] == false && is_flood[i - 1][j] == true)
        {
            res += size_of_pool(i - 1, j);
        }
        if (is_visit[i + 1][j] == false && is_flood[i + 1][j] == true)
        {
            res += size_of_pool(i + 1, j);
        }
        if (is_visit[i][j + 1] == false && is_flood[i][j + 1] == true)
        {
            res += size_of_pool(i, j + 1);
        }
        if (is_visit[i][j - 1] == false && is_flood[i][j - 1] == true)
        {
            res += size_of_pool(i, j - 1);
        }
        return res;
    }
}

int main()
{
    freopen("LAKE.inp", "r", stdin);
    freopen("LAKE.out", "w", stdout);
    int m, n, k;
    cin >> m >> n >> k;
    for (int i = 0, a, b; i < k; i ++)
    {
        cin >> a >> b;
        is_flood[a][b] = true;
    }
    int res = 0;
    for (int i = 1; i <= m; i ++)
    {
        for (int j = 1; j <= n; j ++)
        {
            if (is_visit[i][j] == true)
            {
                continue;
            }
            else
            {
                is_visit[i][j] = true;
                if (is_flood[i][j] == false)
                {
                    continue;
                }
                else
                {
                    int size = size_of_pool(i, j);
                    res = max(res, size);
                }
            }
        }
    }
    cout << res;
    return 0;
}