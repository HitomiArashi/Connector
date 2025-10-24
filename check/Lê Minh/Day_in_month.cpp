/*
Viết chương trình nhập vào tháng và năm. Sau đó kiểm tra và in ra kết quả tháng đó có
bao nhiêu ngày.
Lưu ý: Trường hợp năm nhuận, đáp án đúng phải in ra tháng 2 có 29 ngày.
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

    int month, year;
    cin >> month >> year;
    bool nhuan = false;
    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) // Kiểm tra năm nhuận
        nhuan = true;
    switch (month)
    {
    case 1:
        cout << 31;
        break;

    case 2:
        if (nhuan == true)
            cout << 29;
        else
            cout << 28;
        break;

    case 3:
        cout << 31;
        break;

    case 4:
        cout << 30;
        break;

    case 5:
        cout << 31;
        break;

    case 6:
        cout << 30;
        break;

    case 7:
        cout << 31;
        break;

    case 8:
        cout << 31;
        break;

    case 9:
        cout << 30;
        break;

    case 10:
        cout << 31;
        break;

    case 11:
        cout << 30;
        break;

    case 12:
        cout << 31;
        break;
    }

    //Nếu cần lấy thời gian chạy thì bỏ dòng "return 0;" này.
    return 0;

    clock_t finish = clock();
    cout << el << "Time run: " << (float)(finish - start) / CLOCKS_PER_SEC << " s";
    return 0;
}
/*sol*/