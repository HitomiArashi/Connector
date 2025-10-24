#include<bits/stdc++.h>
typedef long long ll;
const std::string el = "\n";
const std::string yes = "YES";
const std::string no = "NO";
const int MAX = (int)(1e9 + 7);
const int MIN = (int)(-1);
const int DIVISOR = (int)(1e6 + 1);
using namespace std;
int main(){
    freopen("check.inp", "r", stdin);
    freopen("check.out", "w", stdout);
    int t;
    cin >> t;
    while (t --)
    {
        int n, m;
        cin >> n >> m;
        cin.ignore();
        string x, s;
        cin >> x >> s;
        for (int i = 0; i < 5; i ++)
        {
            if (x.find(s) < x.size())
            {
                cout << i << el;
            }
            x += x;
        }
        cout << -1 << el;
    }
}