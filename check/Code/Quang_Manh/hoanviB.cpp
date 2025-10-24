/*cho mảng A gồm N phần tử , tìm 1 hoán vị của mảng A sao cho các phần tử ở cùng vị trí của A và B có cùng chênh lệch bằng K
Dữ liệu vào: Số nguyên N và K
Kết quả: Nếu có hoán vị B thì in ra các hoán vị B đó. nếu ko có hoán vị B thì in ra -1*/
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
    clock_t start = clock();
    freopen("check.inp", "r", stdin);
    freopen("check.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    if(k == 0)
    {
        cnt_if ++;
        for(int i = 1 ; i <= n ; i++)
            cout << i << " ";
    }
    else
    {
        cnt_if ++;
        if(n % (2*k) != 0)
        {
            cnt_if ++;
            cout << -1;
        }
        else
        {
            cnt_if ++;
            for (int i = 1 ; i < n ; i += 2 * k)
            {
                for (int j = i + k; j < i + 2 * k; j ++)
                {
                    cnt_loop ++;
                    cout << j << " ";
                }
                for (int j = i; j < i + k; j ++)
                {
                    cnt_loop ++;
                    cout << j << " ";
                }
            }
        }
    }
    clock_t finish = clock();
    cout << el << "cnt_if: " << cnt_if << el << "cnt_loop: " << cnt_loop << el;
    cout << "Time run: " << (float)(finish - start) / CLOCKS_PER_SEC << " s";
    return 0;
}
/*sol*/