#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, greater<long long>());
    long long sum = 0;
    int len = 0;
    for (int i = 0; i < n; i++){
        sum += a[i];
        len++;
        if(sum - i >= k) break;
        
    }
    if(sum - len + 1 < k) cout << "-1";
    else cout << len;
    
    return 0;
}