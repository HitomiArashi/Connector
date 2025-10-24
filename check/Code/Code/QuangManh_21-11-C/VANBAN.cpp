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
    freopen("VANBAN.inp", "r", stdin);
    freopen("VANBAN.out", "w", stdout);
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i ++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] + ('A' - 'a');
        }
    }
    sort(s.begin(), s.end());
    s += '0';
    vector <pair<char, int> > res;
    int pos = 0;
    for (int i = 1; i < s.size(); i ++)
    {
        if (s[i] != s[i - 1])
        {
            res.push_back({s[i - 1], i - pos});
            pos = i;
        }
    }
    cout << res.size() << el;
    for (pair <char, int> x : res)
    {
        cout << x.first << " " << x.second << el;
    }
    return 0;
}
/*sol*/