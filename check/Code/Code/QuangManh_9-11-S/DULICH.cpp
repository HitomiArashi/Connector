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
    freopen("DULICH.inp", "r", stdin);
    freopen("DULICH.out", "w", stdout);
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll cnt, i = 0, j = 0;
    if (s[0] == '0')
        cnt = 1;
    else
        cnt = 0;
    ll res = MAX;
    while (true)
    {
        //Nếu số lượng phòng trống chưa đủ thì thêm phòng tiếp theo
        if (cnt < k + 1)
        {
            j ++;
            if (j == n)
            {
                break;
            }
            if (s[j] == '0')
            {
                cnt ++;
            }
        }
        //Nếu số lượng phòng trống thừa thì bỏ phòng ở cuối đi
        else if (cnt > k + 1)
        {
            if (s[i] == '0')
            {
                cnt --;
            }
            i ++;
        }
        //Nếu số lượng phòng trống đủ
        else
        {
            int mid = (j - i + 1) / 2;
            //Kiểm tra phòng ở giữa có trống không, nếu không thì tìm phòng trống gần nhất
            if (s[mid] == '1')
            {
                for (int i = 1;; i ++)
                {
                    if (s[mid + i] == '0')
                    {
                        mid += i;
                        break;
                    }
                    if (s[mid - i] == '0')
                    {
                        mid -= i;
                        break;
                    }
                }
            }
            //Lấy khoảng cách xa nhất giữa hai đầu và so sánh với kết quả
            res = min(res, max(j - mid, mid - i));
            j ++;
            if (j == n)
            {
                break;
            }
            if (s[j] == '0')
            {
                cnt ++;
            }
        }
    }
    cout << res;
    return 0;
}
/*sol*/