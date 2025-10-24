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
    freopen("CPLOAI.inp", "r", stdin);
    freopen("CPLOAI.out", "w", stdout);
    set <int> num;
    int n;
    cin >> n;
    for (int i = 0, a; i < n; i ++)
    {
        cin >> a;
        num.insert(a);
    }
    cout << num.size() << el;
    for (auto x: num)
    {
        cout << x << " ";
    }
    return 0;
}
/*sol*/