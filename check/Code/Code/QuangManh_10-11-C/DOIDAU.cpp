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
    int a, res = 0;
    vector <int> save;
    for (int i = 0;; i ++)
    {
        cin >> a;
        if (i == 0)
        {
            save.push_back(a);
        }
        else
        {
            if (a == 0)
            {
                break;
            }
            int b = save.back();
            if (a / abs(a) != b / abs(b))
                res ++;
            save.push_back(a);
        }
    }
    cout << res;
    return 0;
}