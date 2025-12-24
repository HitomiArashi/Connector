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

/**
 * @brief Return 0 when a = b, 1 when a > b, -1 when a < b
 * 
 * @param a 
 * @param b 
 * @return int {0, 1, -1}
 */
int cmp (string a, string b)
{
    while (a.size() < b.size()) a = '0' + a;
    while (a.size() > b.size()) b = '0' + b;
    return a.compare(b);
}

string plus_string(string a, string b)
{
    int save = 0, x, y, sum;
    string res = "";
    while (a.size() < b.size())
        a = '0' + a;
    while (a.size() > b.size())
        b = '0' + b;
    for (int i = a.size() - 1; i >= 0; i --)
    {
        x = a[i] - '0';
        y = b[i] - '0';
        sum = x + y + save;
        save = sum / 10;
        res = (char)(sum % 10 + '0') + res;
    }
    if (save > 0)
        res = '1' + res;
    return res;
}
string minus_string(string a, string b)
{
    bool neg = false;
    string a_ = a, b_ = b;
    if (a_.size() < b_.size() || (a_.size() == b_.size() && a < b))
    {
        neg = true;
        swap(a, b);
    }
    int save = 0, s, x, y;
    string res = "";
    while (a.size() < b.size())
        a = '0' + a;
    while (b.size() < a.size())
        b = '0' + b;
    for (int i = a.size() - 1; i >= 0; i --)
    {
        x = a[i] - '0';
        y = b[i] - '0';
        s = x - y - save;
        if (s < 0)
        {
            s += 10;
            save = 1;
        }
        else
        {
            save = 0;
        }
        res = (char)(s + '0') + res;
    }
    while (res.size() > 1 && res[0] == '0')
    {
        res.erase(0, 1);
    }
    if (neg == true)
    {
        res = '-' + res;
    }
    return res;
}

string multiple_single (string a, ll b) //b là số có 1 chữ số thôi
{
    int save = 0, s, x;
    string c = "";
    for (int i = a.size() - 1; i >= 0; i --)
    {
        x = a[i] - '0';
        s = x * b + save;
        save = s / 10;
        c = (char)(s % 10 + '0') + c;
    }
    if (save > 0)
    {
        stringstream is;
        is << save;
        c = is.str() + c;
    }
    return c;
}

string multiple_string (string a, string b)
{
    int m = -1;
    string sum = "", tmp;
    for (int i = a.size() - 1; i >= 0; i --)
    {
        m ++;
        tmp = multiple_single(b, (int)(a[i] - 48));
        for (int j = 0; j < m; j ++) tmp += '0';
        sum = plus_string(tmp, sum);
    }
    return sum;
}

string divide_single (string a, ll b)
{
    int hold = 0, s = 0;
    string c = "";
    for (int i = 0; i < a.size(); i ++)
    {
        hold = hold * 10 + a[i] - '0';
        s = hold / b;
        hold = hold % b;
        c = c + (char)(s + '0');
    }
    while (c.size() > 1 && c[0] == '0')
        c.erase(0, 1);
    return c;
}

ll mod_single (string a, ll b)
{
    ll hold = 0;
    string c = "";
    for (int i = 0; i < a.size(); i ++)
    {
        hold = (hold * 10 + a[i] - '0') % b;
    }
    return hold;
}

string divide_string (string a, string b)
{
    string hold, c, kb[11];
    int k;
    kb[0] = "0";
    for (int i = 1; i <= 10; i ++)
    {
        kb[i] = plus_string(kb[i - 1], b);
    }
    hold = c = "";
    for (int i = 0; i < a.size(); i ++)
    {
        hold += a[i];
        k = 1;
        while (cmp(hold, kb[k]) != -1)
            k ++;
        c += (char)(k - 1 + '0');
        hold = minus_string(hold, kb[k - 1]);
    }
    while (c.size() > 0 && c[0] == 0)
    {
        c.erase(0, 1);
    }
    return c;
}

string mod_string (string a, string b)
{
    string hold, kb[11];
    int k;
    kb[0] = '0';
    for (int i = 1; i <= 10; i ++)
    {
        kb[i] = plus_string(kb[i - 1], b);
    }
    hold = "";
    for (int i = 0; i < a.size(); i ++)
    {
        hold += a[i];
        k = 1;
        while (cmp(hold, kb[k]) != -1)
        {
            k ++;
        }
        hold = minus_string(hold, kb[k - 1]);
    }
    return hold;
}

int main()
{
    freopen("tape.inp", "r", stdin);
    freopen("tape.out", "w", stdout);
    long long k;
    string p;
    cin >> k >> p;
    p = plus_string(p, "1");
    string s = "1", l = "1", t = "1";
    //B1: Lấy độ dài tổng
    for (int i = 0; i < k; i ++)
        s = multiple_single(s, 2);
    //Bước 5:
    for (int i = 0; i < k; i ++)
    {
        //Bước 2:
        if (cmp (p, divide_single(s, 2)) != 1)
        {
            //Bước 3:
            s = divide_single(s, 2);
            t = multiple_single(t, 2);
            l = plus_string(minus_string(t, l), "1");
            p = plus_string(minus_string(s, p), "1");
        }
        else
        {
            //Bước 4:
            s = divide_single(s, 2);
            t = multiple_single(t, 2);
            p = minus_string(p, s);
        }
    }
    //Bước 6:
    cout << plus_string (minus_string(t, l), "1");
    return 0;
}
/*sol*/

/*
Ý tưởng:
B1: Lấy độ dài tổng (s = 2 ^ k)
B2: Kiểm tra xem vị trí đánh dấu nằm ở bên trái không (p < s / 2)
    + Đúng: Chạy B3
    + Sai: Chạy B4
B3: TH vị trí đánh dấu bên trái:
    + Cập nhật mảnh giấy (s / 2)
    + Cập nhật tổng số lớp (t * 2)
    + Cập nhật số lớp của vị trí đánh dấu (t - l + 1)
    + Cập nhật vị trí đánh dấu (s - p + 1)
    + Chạy B5
B4: TH vị trí đánh dấu bên phải:
    + Cập nhật độ dài mảnh giấy (s / 2)
    + Cập nhật tổng số lớp (t * 2)
    + Cập nhật vị trí đánh dấu (p - s)
    + Chạy B5
B5: Kiểm tra đã gấp đủ số lần không (k)
    + Đúng: Chạy B6
    + Sai: Chạy B2
B6: In kêt quả, kết thúc chương trình
*/