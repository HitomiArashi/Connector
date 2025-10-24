/*
Viết chương trình yêu cầu người dùng nhập vào một số nguyên dương n (1-10).
In ra tất cả bảng cửu chương nhân từ bảng cửu chương 1 đến bảng cửu chương n.
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

void bang_cuu_chuong(int n);

int main()
{
    clock_t start = clock();

    int n;
    cin >> n;
    for (int i = 1; i <= n; i ++)
        bang_cuu_chuong(i);

    //Nếu cần lấy thời gian chạy thì bỏ dòng "return 0;" này.
    return 0;

    clock_t finish = clock();
    cout << el << "Time run: " << (float)(finish - start) / CLOCKS_PER_SEC << " s";
    return 0;
}
/*sol*/

void bang_cuu_chuong(int n)
{
    for (int i = 1; i <= 10; i ++)
    {
        cout << n << " x " << i << " = " << n * i << el;
    }
    cout << el;
}