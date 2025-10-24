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
void lower_case(string &s)
{
    for (int i = 0; i < s.size(); i ++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 'a' - 'A';
        }
    }
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string a, b;
    cin >> a >> b;
    lower_case(a);
    lower_case(b);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0, res = 0;
    while (i < a.size() && j < b.size())
    {
        if (a[i] == b[j])
        {
            i ++;
            j ++;
        }
        else if (a[i] < b[j])
        {
            i ++;
            res ++;
        }
        else if (a[i] > b[j])
        {
            j ++;
            res ++;
        }
    }
    cout << res;
    return 0;
}
/*sol*/