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
    string s;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i --)
    {
        if (s[i] < s[i - 1])
        {
            swap(s[i], s[i - 1]);
            if (s[0] == '0')
            {
                cout << 0;
                return 0;
            }
            cout << s;
            return 0;
        }
    }
    cout << 0;
    return 0;
}
/*sol*/