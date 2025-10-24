/*
Đây là trò chơi với dãy số quen thuộc của các bạn tiểu học.

Ban đầu cho dãy số tự nhiên từ 1 đến N. Lần lượt xóa các số ở vị trí chẵn, từ trái sang phải, sau đó lặp lại thao tác xóa các số ở vị trí chẵn, từ trái sang phải…

Hỏi cứ lặp lại các thao tác như vậy thì số K được xóa ở lần xóa thứ bao nhiêu?

Ví dụ: N = 10, K = 5

Dãy ban đầu là 1, 2, 3, 4, 5, 6, 7, 8, 9, 10.

Xóa các số ở vị trí chẵn từ dãy ban đầu, dãy số thu được là: 1, 3, 5, 7, 9 (xóa 5 số: 2, 4, 6, 8, 10).

Tiếp tục xóa các số ở vị trí chẵn ta được dãy số: 1, 5, 9 (xóa 2 số: 3, 7).

Tiếp theo sẽ xóa số 5. Vậy số 5 sẽ xóa ở lần xóa thứ 8.

Yêu cầu:
Đưa ra thứ tự xóa số K của dãy ban đầu các số từ 1 đến N.

Dữ liệu:
Nhập vào hai số tự nhiên N và K (2 ≤ K ≤ N ≤ 10¹⁵). (Mỗi số trên một dòng)

Kết quả:
Đưa ra duy nhất một số tự nhiên theo yêu cầu của bài.
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

    freopen("check.inp", "r", stdin);
    freopen("check.out", "w", stdout);

    long long n, k;
    cin >> n >> k;
    long long a = 2;
    long long t = 0;
    while (k % a != ((a >> 1) + 1) % a)
    {
        t += n / 2;
        n /= 2;
        a <<= 1;
    }
    cout << t + (a == 2 ? k / 2 : k / 2 + 1);

    clock_t finish = clock();
    cout << el << "Time run: " << (float)(finish - start) / CLOCKS_PER_SEC << " s";
    return 0;
}
/*sol*/