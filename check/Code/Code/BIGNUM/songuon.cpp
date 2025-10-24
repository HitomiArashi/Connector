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

string plus_string(string a, string b)
{
    int save = 0, x, y, sum;
    string res = "";
    while (a.size() < b.size())
        a = '0' + a;
    while (a.size() > b.size())
        b = '0' + b;
    for (int i = a.size() - 1; i >= 0; i --)
    {
        x = a[i] - '0';
        y = b[i] - '0';
        sum = x + y + save;
        save = sum / 10;
        res = (char)(sum % 10 + '0') + res;
    }
    if (save > 0)
        res = '1' + res;
    return res;
}
string minus_string(string a, string b)
{
    bool neg = false;
    string a_ = a, b_ = b;
    if (a_.size() < b_.size() || (a_.size() == b_.size() && a < b))
    {
        neg = true;
        swap(a, b);
    }
    int save = 0, s, x, y;
    string res = "";
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;
    for (int i = a.size() - 1; i >= 0; i --)
    {
        x = a[i] - '0';
        y = b[i] - '0';
        s = x - y - save;
        if (s < 0)
        {
            s += 10;
            save = 1;
        }
        else
        {
            save = 0;
        }
        res = (char)(s + '0') + res;
    }
    while (res.size() > 1 && res[0] == '0')
    {
        res.erase(0, 1);
    }
    if (neg == true)
    {
        res = '-' + res;
    }
    return res;
}

string convert_int_to_string (int n)
{
    string res = "";
    while (n != 0)
    {
        res = (char)(n % 10 + '0') + res;
        n /= 10;
    }
    return res;
}

string sum_element(string s)
{
    int sum = 0;
    for (int i = 0; i < s.size(); i ++)
    {
        sum += (int)(s[i] - '0');
    }
    return convert_int_to_string(sum);
}

int main()
{
    freopen("songuon.inp", "r", stdin);
    freopen("songuon.out", "w", stdout);

    string a;
    cin >> a;
    int max_plus = (a.size() - 1) * 9;
    for (int i = max_plus; i > 0; i --)
    {
        string add = convert_int_to_string(i);
        string source = minus_string(a, add);
        if (sum_element(source) == add)
        {
            cout << source; return 0;
        }
    }
    cout << 0;
    return 0;
}
/*sol*/
