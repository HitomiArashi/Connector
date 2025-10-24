#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long count = 0;
    
    for (int i = 0; i < n; i++){
        long long x = 0, y = 0;
        for (int j = i; j < n; j++){
            if(a[j] % 2 == 0) x += a[j];
            else if(a[j] % 2 != 0) y += a[j];
            if(x != 0 && y != 0 && x - y <= k && x - y >= 0) count++;
        }
    }
    if(count == 0) cout << "-1";
    else cout << count;
    return 0;
}