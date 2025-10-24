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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    //Nhập và sáp xếp dãy
    int n;
    cin >> n;
    vector <ll> num(n);
    bool zero = false;
    for (int i = 0; i < n; i ++)
    {
        cin >> num[i];
        if (num[i] == 0){
            num[i] = int(1e6 + 3);
            zero = true;
        }
    }
    sort(num.begin(), num.end());

    //Nén dãy
    vector <pair<int, int> > compress;
    int cnt = 1, pos = 0;
    for (int i = 1; i < n; i ++)
    {
        if (num[i] - num[i - 1] != 1)
        {
            compress.push_back({cnt, pos});
            cnt = 1;
            pos = i;
        }
        else
        {
            cnt ++;
        }
    }
    compress.push_back({cnt, pos});

    //Tìm đoạn con lớn nhất + so sánh kết quả
    int res = 0;
    for (int i = 0; i < compress.size(); i ++)
    {
        //Đầu dãy nên chỉ kiểm tra phía đuôi
        if (i == 0)
        {
            if (zero == true)
            {
                if (num[compress[i].second + compress[i].first] - num[compress[i].second + compress[i].first - 1] == 2)
                {
                    res = max(res, compress[i].first + compress[i + 1].first + 1);
                }
                else
                {
                    res = max(res, compress[i].first + 1);
                }
            }
            else
            {
                res = max(res, compress[i].first);
            }
        }

        //Cuối dãy nên chỉ kiểm tra phía đầu
        else if (i == compress.size() - 1)
        {
            if (zero == true)
            {
                if (num[compress[i].second] - num[compress[i].second - 1] == 2)
                {
                    res = max(res, compress[i].first + compress[i - 1].first + 1);
                }
                else
                {
                    res = max(res, compress[i].first + 1);
                }
            }
            else
            {
                res = max(res, compress[i].first);
            }
        }

        //Giữa dãy nên kiểm tra cả hai đầu
        else
        {
            if (zero == true)
            {
                //Đầu
                if (num[compress[i].second + compress[i].first] - num[compress[i].second + compress[i].first - 1] == 2)
                {
                    res = max(res, compress[i].first + compress[i + 1].first + 1);
                }
                else
                {
                    res = max(res, compress[i].first + 1);
                }

                //Đuôi
                if (num[compress[i].second] - num[compress[i].second - 1] == 2)
                {
                    res = max(res, compress[i].first + compress[i - 1].first + 1);
                }
                else
                {
                    res = max(res, compress[i].first + 1);
                }
            }
            else
            {
                res = max(res, compress[i].first);
            }
        }
    }
    cout << res;
    return 0;
}
/*sol*/


/*

Ý tưởng:
- Sắp xếp và nén (lưu độ dài và chỉ số vị trí của phần tử đầu tiên)
- Lấy đoạn con có độ dài dài nhất.
- Nếu có số 0, kiểm tra xem thêm 0 vào một trong hai đầu có thể nối đoạn con với nhau không:
    + Nếu không đầu nào có thể nối được => độ dài tăng thêm 1
    + Nếu một trong hai đầu có thể nối được => độ dài là tổng của hai đoạn con tăng thêm 1
    + Nếu cả hai đầu đều có thể nối được => độ dài là giá trị lớn nhất của tổng của một trong hai đầu tăng thêm một

*/