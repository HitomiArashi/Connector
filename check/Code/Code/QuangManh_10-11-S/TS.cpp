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
    int n;
    cin >> n;
    vector <int> num(32768, 0);
    for (int i = 0, a; i < n; i ++)
    {
        cin >> a;
        num[a] ++;
    }
    for (int i = 0; i < num.size(); i ++)
    {
        if (num[i] > 1)
        {
            cout << i << " " << num[i] << el;
        }
    }
    return 0;
}