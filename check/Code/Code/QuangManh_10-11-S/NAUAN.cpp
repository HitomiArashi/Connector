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
    vector <int> num(n);
    vector <int> prefix(n + 1, 0);
    for (int i = 0; i < n; i ++)
    {
        cin >> num[i];
        prefix[i + 1] = prefix[i] + num[i];
    }
    int m;
    cin >> m;
    for (int i = 0, a; i < m; i ++)
    {
        cin >> a;
        cout << (int)(lower_bound(prefix.begin(), prefix.end(), a) - prefix.begin()) << " ";
    }
    return 0;
}