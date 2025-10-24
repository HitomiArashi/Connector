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
    string s;
    cin >> s;
    ll n = 0;
    for (auto x: s)
    {
        if (x >= '0' && x <= '9')
        {
            n = n * 10 + (int)(x - '0');
        }
        else
        {
            do
            {
                cout << x;
                n --;
            } while (n > 0);
            n = 0;
        }
    }
    return 0;
}