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
    int n;
    cin >> n;
    int cnt = n;
    vector <int> x(n), y(n), z(n);
    for (int i = 0; i < n; i ++)
    {
        cin >> x[i];
    }
    for (int i = 0; i < n; i ++)
    {
        cin >> y[i];
    }
    for (int i = 0; i < n; i ++)
    {
        cin >> z[i];
    }
    for (int i = 0; i < n; i ++)
    {
        if (x[i] > y[i])
        {
            swap(x[i], y[i]);
        }
        if (x[i] > z[i])
        {
            swap(x[i], z[i]);
        }
        if (y[i] > z[i])
        {
            swap(y[i], z[i]);
        }
    }
    for (int i = 0; i < n; i ++)
    {
        for (int j = i + 1; j < n; j ++)
        {
            if (x[j] >= x[i] && y[j] >= y[i] && z[j] >= z[i])
            {
                cnt --;
                break;
            }
        }
    }
    cout << cnt;
    return 0;
}
/*sol*/