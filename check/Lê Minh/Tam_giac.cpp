/*
Với n nhập từ bàn phím, in ra các hình tam giác như sau (ví dụ với n=5)

*               *       *               *
* *            * *      * *            * *
* * *         * * *     *   *         *   *
* * * *      * * * *    *     *      *     *
* * * * *   * * * * *   * * * * *   * * * * *
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

void vuong_dac(int n);
void vuong_rong(int n);
void can_dac(int n);
void can_rong(int n);

int main()
{
    clock_t start = clock();

    int n;
    cin >> n;
    vuong_dac(n);
    can_dac(n);
    vuong_rong(n);
    can_rong(n);

    //Nếu cần lấy thời gian chạy thì bỏ dòng "return 0;" này.
    // return 0;

    clock_t finish = clock();
    cout << el << "Time run: " << (float)(finish - start) / CLOCKS_PER_SEC << " s";
    return 0;
}
/*sol*/

void vuong_dac(int n)
{
    for (int i = 1; i <= n; i ++)
    {
        for (int j = 1; j <= i; j ++)
            cout << "* ";
        cout << el;
    }
    cout << el;
}

void vuong_rong(int n)
{
    for (int i = 1; i <= n; i ++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= i; j ++)
                cout << "* ";
        }
        else
        {
            for (int j = 1; j <= i; j ++)
            {
                if (j == 1 || j == i)
                    cout << "* ";
                else
                    cout << "  ";
            }
        }
        cout << el;
    }
    cout << el;
}

void can_dac(int n)
{
    string default_line;
    int length_default = n + n - 1;
    for (int i = 0; i < n + n - 1; i ++)
        default_line += " ";
    for (int i = 1; i <= n; i ++)
    {
        string reference_line = default_line;
        for (int j = length_default / 2 - (i - 1); j <= length_default / 2 + (i - 1); j += 2)
            reference_line[j] = '*';
        cout << reference_line << el;
    }
    cout << el;
}

void can_rong(int n)
{
    string default_line;
    int length_default = n + n - 1;
    for (int i = 0; i < n + n - 1; i ++)
        default_line += " ";
    for (int i = 1; i <= n; i ++)
    {
        string reference_line = default_line;
        if (i == n)
        {
            for (int j = length_default / 2 - (i - 1); j <= length_default / 2 + (i - 1); j += 2)
                reference_line[j] = '*';
        }
        else
        {
            reference_line[length_default / 2 - (i - 1)] = '*';
            reference_line[length_default / 2 + (i - 1)] = '*';
        }
        cout << reference_line << el;
    }
    cout << el;
}