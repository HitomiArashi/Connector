#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    int onesCount = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] == 1) {
            onesCount++;
            a[i] = -1;  
        } else {
            a[i] = 1;   
        }
    }
    int maxSum = a[0];
    int currentSum = a[0];

    for (int i = 1; i < n; ++i) {
        currentSum = max(a[i], currentSum + a[i]);
        maxSum = max(maxSum, currentSum);
    }
    cout << onesCount + maxSum<<endl;
    return 0;
}