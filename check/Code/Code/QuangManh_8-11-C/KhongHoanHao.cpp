#include <bits/stdc++.h>
using namespace std;

int main(){
    long long a[100000] = {0};
    for (int i = 1; i < 100000; i++){
        for (int j = 2; i * j < 100000; j++){
            a[i*j] += i;
        }
    }
    long long b, c;
    cin >> b >> c;
    long long count = 0;
    for (int i = b; i <= c; i++)
    {
        if(a[i] > i) count++;
    }
    cout << count;
    return 0;
}