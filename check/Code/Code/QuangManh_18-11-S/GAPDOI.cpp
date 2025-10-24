#include<bits/stdc++.h>
typedef long long ll;
const std::string el = "\n";
const std::string yes = "YES";
const std::string no = "NO";
const int MAX = (int)(1e9 + 7);
const int MIN = (int)(-1);
const int DIVISOR = (int)(1e6 + 1);
using namespace std;

ll n;
vector <ll> num;

int main(){
    cin >> n;
    for (int i = 0, a; i < n; i ++)
    {
        cin >> a;
        num.push_back(a);
    }
    sort(num.begin(), num.end());
    ll cnt = 0, res = MAX;
    for (int i = 0; i < n; i ++)
    {
        if (binary_search(num.begin(), num.end(), num[i] / 2) == true)
        {
            cnt ++;
            res = min(res, num[i]);
        }
    }
    cout << cnt << " " << res;
    return 0;
}