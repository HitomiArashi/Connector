/*
Viết chương trình nhập vào hai số nguyên và cho phép chọn:
1. Cộng
2. Trừ
3. Nhân
4. Chia
5. Tính số lớn nhất
6. Tính số nhỏ nhất
*/
#include <bits/stdc++.h>
typedef long long ll;
const std::string el = "\n";
const std::string yes = "YES";
const std::string no = "NO";
const int MAX = (int)(1e9 + 7);
const int MIN = (int)(-1);
const int DIVISOR = (int)(1e6 + 1);
using namespace std;

inline void solve();

int main()
{
    clock_t start = clock();

    int a, b, phep_toan;
    cin >> a >> b >> phep_toan;
    switch (phep_toan)
    {
    case 1: // Cộng
        cout << a + b;
        break;

    case 2: // Trừ
        cout << a - b;
        break;

    case 3: // Nhân
        cout << a * b;
        break;

    case 4: // Chia
        cout << a / b;
        break;

    case 5: // Số lớn nhất
        cout << max(a, b);
        break;

    case 6: // Số bé nhấtnhất
        cout << min(a, b);
        break;
    }

    //Nếu cần lấy thời gian chạy thì bỏ dòng "return 0;" này.
    return 0;

    clock_t finish = clock();
    cout << el << "Time run: " << (float)(finish - start) / CLOCKS_PER_SEC << " s";
    return 0;
}
/*sol*/