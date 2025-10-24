/*
Năm học mới, Trường học của Nam muốn quản lý học sinh đồng bộ nên tạo cho mỗi học sinh một mã học sinh là một số có 6 hoặc 7 quản lý oột mã học sinh được xem là hợp lệ khi có tổng kiểm tra với chữ số 0 ở hàng đơn vị. Việc tính tổng kiểm tra của một mi học sinh thực hiện như sau: nhân lần lượt các chữ số của mã học sinh từ phải sang trái với các thừa số tương ứng 9, 7, 3, sau đó cộng tất cả các tích lại với nhau.
Ví dụ:
Mã học sinh: 1  3  9 0  2  7  2
Thừa số:     9  7  3 9  7  3  9
Tích:        9 21 27 0 14 21 18
Do đó tổng kiểm tra là 9 + 21 + 27 + 0 + 14 + 21 + 18 = 110, chữ số hàng đơn vị là 0, vì vậy mã này là hợp lệ.
Khi tổ chức một cuộc thi, một số học sinh viết chữ rất xấu nên giáo viên không xác định được mã học sinh. Bạn hãy giúp giáo viên xác định mã học sinh trong trường hợp có đúng 1 chữ số không đọc được, biết rằng chữ số đầu tiên của mã học sinh luôn luôn đọc được và khác 0.

Dữ liệu vào: Một mã học sinh với một chữ số là một dấu hỏi chấm và có độ dài 6 hoặc 7 chữ số.
Kết quả: Một mã học sinh tìm được.
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

int cnt_if, cnt_loop;

int main()
{
    freopen("check.inp", "r", stdin);
    freopen("check.out", "w", stdout);
    clock_t start = clock();
    string a;
    cin >> a;
    int savenum, sum = 0;
    for(int i = 0 ; i < a.size() ; i++)
    {
        cnt_loop ++;
        int x;
        if (i % 3 == 0)
        {
            cnt_if ++;
            x = 9;
        }
        else if (i % 3 == 1)
        {
            cnt_if += 2;
            x = 7;
        }
        else
        {
            cnt_if += 2;
            x = 3;
        }
        if (a[i] == '?')
        {
            cnt_if ++;
            savenum = x;
        }
        else
        {
            cnt_if ++;
            sum += (a[i] - '0') * x;
        }
    }
    int k = 10 - sum % 10, res = -1;
    for (int i = 0; i < 10; i ++)
    {
        cnt_loop ++;
        if ((savenum * i) % 10 == k)
        {
            cnt_if ++;
            res = i;
        }
    }
    for (int i = 0; i < a.size(); i ++)
    {
        cnt_loop ++;
        if (a[i] == '?')
        {
            cnt_if ++;
            cout << res;
        }
        else
        {
            cnt_if ++;
            cout << a[i];
        }
    }
    clock_t finish = clock();
    cout << el << "cnt_if: " << cnt_if << el << "cnt_loop: " << cnt_loop << el;
    cout << "Time run: " << (float)(finish - start) / CLOCKS_PER_SEC << " s";
    return 0;
}
/*sol*/