#include <bits/stdc++.h>
using namespace std;
 
/*---------------------------*/
 
int main() {
    freopen("DAYCON.inp", "r", stdin);
    freopen("DAYCON.out", "w", stdout);
    int n; cin >> n;
    long long sum = 0;
    long long ans = 0;
    int tracki = 1;
    pair<int,int> resIndex;
    for(int i = 1; i <= n; i++) {
        int v;
        cin >> v;
        sum += v;
        if (ans < sum ||
            (ans == sum /* && i-tracki > resIndex.se - resIndex.fi) */)) {
                ans = sum;
                resIndex.first = tracki;
                resIndex.second = i;
            }
        if (sum < 0) {
            sum = 0;
            tracki = i + 1;
        }
    }
    cout << ans;
 
    return 0;
}