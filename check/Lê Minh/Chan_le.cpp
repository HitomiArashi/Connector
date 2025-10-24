/*
Viết chương trình yêu cầu người dùng nhập vào một số nguyên. Nếu số đó là số chia hết
cho 5, in ra:
"Số <số> là số chia hết cho 5."
Nếu là số lẻ, in ra:
"Số <số> là số không chia hết cho 5."
Ngoài ra, nếu số đó âm thì in thêm " (là số âm)".
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

    string n;
    cin >> n;
    bool negative = false;
    bool division = false;
    if (n[0] == '-') // Kiểm tra số âm
        negative = true;
    reverse(n.begin(), n.end());
    if (n[0] == '0' || n[0] == '5') //Kiểm tra chữ số cuối
        division = true;
    if (negative == true)
    {
        if (division == true)
            cout << "Số " << n << " là số âm chia hết cho 5.";
        else
            cout << "Số " << n << " là số âm không chia hết cho 5.";
    }
    else
    {
        if (division == true)
            cout << "Số " << n << " là số chia hết cho 5.";
        else
            cout << "Số " << n << " là số không chia hết cho 5.";
    }

    //Nếu cần lấy thời gian chạy thì bỏ dòng "return 0;" này.
    return 0;

    clock_t finish = clock();
    cout << el << "Time run: " << (float)(finish - start) / CLOCKS_PER_SEC << " s";
    return 0;
}
/*sol*/