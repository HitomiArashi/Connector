#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, K;
    cin >> n >> K;
    vector<int> x(n);
    for (int i = 0; i < n; i++) cin >> x[i];

    long long count = 0, sum = 0;
    for (int i = 0, j = 0; i < n; i++) {
        sum += x[i];
        while (sum > K) sum -= x[j++];
        count += i - j + 1;
    }

    cout << count << "\n";

    return 0;
}
