#include <bits/stdc++.h>
typedef long long ll;
const std::string el = "\n";
const std::string yes = "YES";
const std::string no = "NO";
const int MAX = (int)(1e9 + 7);
const int MIN = (int)(-1);
const int DIVISOR = (int)(1e6 + 1);
using namespace std;

int main(){
    ll n, t, m;
    cin >> n >> t >> m;
    vector <ll> num(n);
    for (auto& x: num)
        cin >> x;
    t --;
    ll res = 0;
    for (int i = 0; i < m; i ++)
    {
        res += num[t];
        t ++;
        if (t == n)
            t = 0;
    }
    cout << res;
    return 0;
}