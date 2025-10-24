/*
Viết chương trình nhập vào điểm trung bình.
+ Nếu điểm >= 90: In "Xuất sắc"
+ Nếu 80 <= điểm < 90: In "Giỏi"
+ Nếu 70 <= điểm < 80: In "Khá"
+ Nếu 60 <= điểm < 70: In "Trung bình khá"
+ Nếu 50 <= điểm < 60: In "Trung bình"
+ Dưới 50: In "Yếu"
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
    
    int kq;
    cin >> kq;
    if (kq >= 90)
        cout << "Xuất sắc";
    else if (kq >= 80)
        cout << "Giỏi";
    else if (kq >= 70)
        cout << "Khá";
    else if (kq >= 60)
        cout << "Trung bình khá";
    else if (kq >= 50)
        cout << "Trung bình";
    else
        cout << "Yếu";

    //Nếu cần lấy thời gian chạy thì bỏ dòng "return 0;" này.
    return 0;

    clock_t finish = clock();
    cout << el << "Time run: " << (float)(finish - start) / CLOCKS_PER_SEC << " s";
    return 0;
}
/*sol*/