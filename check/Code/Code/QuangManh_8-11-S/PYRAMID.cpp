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

void solve_question1()
{
    ll n;
    cin >> n;
    ll f = ceil(sqrt(n));
    if (f % 2 == 0)
    {
        cout << (1 + (f - 1) * 2) - (f * f - n);
    }
    else
    {
        cout << (f * f - n + 1);
    }
}

void solve_question2()
{
    ll R, C;
    cin >> R >> C;
    if (R % 2 == 0)
    {
        cout << R * R - (1 + (R - 1) * 2) + C;
    }
    else
    {
        cout << R * R - C + 1;
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("check.inp", "r", stdin);
    freopen("check.out", "w", stdout);
    
    solve_question1();
    solve_question2();
}
/*sol*/