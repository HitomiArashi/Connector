/*
Với N nhập vào từ bàn phím, In ra màn hình tất cả các số nguyên tố bé hơn hoặc bằng N.
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

    int n;
    cin >> n;
    vector <int> prime;
    for (int i = 2; i < n; i ++) // Lọc số nguyên tố từ 2 đến nn
    {
        if (i == 2)
        {
            prime.push_back(i);
        }
        else
        {
            bool p = true;
            for (int j = 0; j < prime.size(); j ++)
            {
                if (i % prime[j] == 0)
                {
                    p = false;
                    break;
                }
            }
            if (p)
            {
                prime.push_back(i);
            }
        }
    }
    for (auto x : prime)
        cout << x << " ";

    //Nếu cần lấy thời gian chạy thì bỏ dòng "return 0;" này.
    return 0;

    clock_t finish = clock();
    cout << el << "Time run: " << (float)(finish - start) / CLOCKS_PER_SEC << " s";
    return 0;
}
/*sol*/