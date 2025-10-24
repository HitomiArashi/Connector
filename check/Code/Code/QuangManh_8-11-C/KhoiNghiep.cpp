#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;
    pair <long long, long long> a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n);
    long long count = 0;
    long long cost = 0;

    for (int i = 0; i < n; i++){
        if(a[i].first > i) cost += a[i].second;
    }
    cout << cost;
    
    return 0;
}