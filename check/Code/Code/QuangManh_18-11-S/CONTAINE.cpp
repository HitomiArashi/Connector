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
    ll x[3], y[3], z[3];
    for (int i = 0; i < 3; i ++)
    {
        cin >> x[i] >> y[i] >> z[i];
    }
    if (x[0] + x[1] == x[2] && y[0] + y[1] == y[2])
    {
        cout << yes;
    }
    else if (x[0] + x[1] == x[2] && (z[0] == z[2] && z[1] == z[2]))
    {
        cout << yes;
    }
    else if (y[0] + y[1] == y[2] && (z[0] == z[2] && z[1] == z[2]))
    {
        cout << yes;
    }
    else
    {
        cout << no;
    }
    return 0;
}