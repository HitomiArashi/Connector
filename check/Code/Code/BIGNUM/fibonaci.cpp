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

int main()
{
    freopen("fibonaci.inp", "r", stdin);
    freopen("fibonaci.out", "w", stdout);
    vector<string> Fibo;
    Fibo.push_back("1");
    Fibo.push_back("1");
    while (Fibo.size() < 10000)
    {
        int sz = Fibo.size();
        Fibo.push_back(plus_string(Fibo[sz - 1], Fibo[sz - 2]));
    }
    int n;
    cin >> n;
    cout << Fibo[n];
    return 0;
}
/*sol*/