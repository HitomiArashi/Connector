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

int main()
{
    freopen("sumfibo.inp", "r", stdin);
    freopen("sumfibo.out", "w", stdout);

    vector<string> Fibo;
    Fibo.push_back("1");
    Fibo.push_back("1");
    while (Fibo.size() < 10000)
    {
        int sz = Fibo.size();
        Fibo.push_back(plus_string(Fibo[sz - 1], Fibo[sz - 2]));
    }

    string a;
    cin >> a;
    vector <string> res;
    while (a != "0")
    {
        for (int i = 0; a.size() <= Fibo[i].size(); i ++)
        {
            string s = Fibo[i];
            if (a.size() < s.size() || (a.size() == s.size() && a < s))
            {
                res.push_back(Fibo[i - 1]);
                a = minus_string(a, Fibo[i - 1]);
                break;
            }
        }
    }
    for (int i = res.size() - 1; i >= 0; i --)
        cout << res[i] << " ";
}
/*sol*/
