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
vector <int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97, 101, 103, 107};

int sum_digit(vector <int> a)
{
    int sum = 0;
    for (int i = 0; i < a.size(); i ++)
    {
        sum += a[i];
    }
    return sum;
}
void Update(vector <int> &a)
{
    fill(a.begin(), a.end(), 0);
    a.push_back(1);
    a.front() = 1;
}
vector <int> Next_Pad(vector <int> &a)
{
    int n = a.size();
    int i = n / 2;
    while (true)
    {
        a[i] ++;
        if (a[i] == 10)
        {
            a[i] = 0;
            a[n - i - 1] = a[i];
            i --;
            if (i == -1)
            {
                Update(a);
                break;
            }
        }
        else
        {
            a[n - i - 1] = a[i];
            break;
        }
    }
    return a;
}
/*
True when vec > str;
False when str >= vec;
*/
bool compare(vector <int> vec, string str)
{
    if (vec.size() > str.size())
    {
        return true;
    }
    else if (str.size() > vec.size())
    {
        return false;
    }
    else
    {
        int n = vec.size();
        for (int i = 0; i < n; i ++)
        {
            if (vec[i] > (str[i] - '0'))
            {
                return true;
            }
            else if ((str[i] - '0') > vec[i])
            {
                return false;
            }
        }
        return false;
    }
}

int main()
{
    freopen("check.inp", "r", stdin);
    freopen("check.out", "w", stdout);
    string a, b;
    cin >> a >> b;
    int length_a = a.size();
    int curr_num = 0;
    vector <int> digit(length_a, 0);
    if (length_a % 2 == 0)
    {
        Update(digit);
    }
    else
    {
        for (int i = 0; i < length_a / 2 + 1; i ++)
        {
            if (i == 0)
            {
                digit[i] = (a[length_a - i - 1] == '0' ? a[i] - '0' : min(a[i], a[length_a - i - 1]) - '0');
            }
            else if (i == (length_a % 2 == 0 ? length_a / 2 - 1 : length_a / 2))
            {
                digit[i] = max(a[i], a[length_a - i - 1]) - '0';
            }
            else
            {
                digit[i] = (min(a[i], a[length_a - i - 1]) - '0');
            }
            digit[length_a - i - 1] = digit[i];
        }
    }
    int cnt = 0;
    int abc = sum_digit(digit);
    if (*find(prime.begin(), prime.end(), abc) == abc)
    {
        cnt ++;
    }
    while (compare(Next_Pad(digit), b) == false)
    {
        if (digit.size() % 2 == 0 && sum_digit(digit) == 2)
        {
            cnt ++;
            Update(digit);
            if (compare(digit, b) == true)
            {
                break;
            }
        }
        else if (digit.size() % 2 == 0 && sum_digit(digit) != 2)
        {
            Update(digit);
            if (compare(digit, b) == true)
            {
                break;
            }
        }
        abc = sum_digit(digit);
        if (*find(prime.begin(), prime.end(), abc) == abc)
        {
            cnt ++;
        }
    }
    cout << cnt;
    return 0;
}
/*sol*/