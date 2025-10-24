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

struct info{
    bool light;
    bool visited;
    vector <pair <int, int> > switches;
};

int deal(int i, int j, vector < vector <info> > &light)
{
    int res = 1;
    light[i][j].visited = true;
    for (int index = 0; index < light[i][j].switches.size(); index ++)
    {
        light[light[i][j].switches[index].first][light[i][j].switches[index].second].light = true;
    }
    while (!((light[i - 1][j].light == false || light[i - 1][j].visited == true)
        and (light[i + 1][j].light == false || light[i + 1][j].visited == true)
        and (light[i][j + 1].light == false || light[i][j + 1].visited == true)
        and (light[i][j - 1].light == false || light[i][j - 1].visited == true)))
    {
        if (light[i - 1][j].light == true && light[i - 1][j].visited == false)
            res += deal(i - 1, j, light);
        if (light[i + 1][j].light == true && light[i + 1][j].visited == false)
            res += deal(i + 1, j, light);
        if (light[i][j - 1].light == true && light[i][j - 1].visited == false)
            res += deal(i, j - 1, light);
        if (light[i][j + 1].light == true && light[i][j + 1].visited == false)
            res += deal(i, j + 1, light);
    }
    return res;
}

int main()
{
    freopen("LIGHTSON.inp", "r", stdin);
    freopen("LIGHTSON.out", "w", stdout);
    ll n, m;
    cin >> n >> m;
    info x;
    x.light = false;
    x.visited = false;
    x.switches = {};
    vector <info> s (n + 1, x);
    vector < vector <info> > light (n + 1, s);
    light[1][1].light = true;
    for (int i = 0; i < m; i ++)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        light[a][b].switches.push_back({c, d});
    }
    cout << deal(1, 1, light);
    return 0;
}
/*sol*/