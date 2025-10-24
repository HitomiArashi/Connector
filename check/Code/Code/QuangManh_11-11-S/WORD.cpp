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

bool check_palindrome(string s)
{
    string cmp = s;
    reverse(cmp.begin(), cmp.end());
    if (s == cmp)
        return true;
    else
        return false;
}

int main()
{
    string s;
    vector <string> res;
    while (cin >> s)
    {
        if (check_palindrome(s) == true)
        {
            res.push_back(s);
        }
        s[0] += 'A' - 'a';
        cout << s << " ";
    }
    cout << el;
    if (res.size() == 0)
    {
        cout << "khong co";
    }
    else
    {
        for (auto x : res)
        {
            cout << x << " ";
        }
        cout << res.size();
    }
    return 0;
}
/*sol*/