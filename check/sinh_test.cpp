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

void Lowercase(string &s)
{
    for (auto x : s)
    {
        if (x >= 'A' && x <= 'Z')
        {
            x = x + 'a' - 'A';
        }
    }
}

void random_string()
{
    string s;
    cin >> s;
    Lowercase(s);
    int length;
    cin >> length;
    if (length < 1)
    {
        length = rand();
    }
    if (s == "lowercase")
    {
        for (int i = 0; i < length; i ++)
        {
            cout << (char)(rand() % ('z' - 'a' + 1) + 'a');
        }
    }
    else if (s == "uppercase")
    {
        for (int i = 0; i < length; i ++)
        {
            cout << (char)(rand() % ('Z' - 'A' + 1) + 'A');
        }
    }
    else if (s == "bothcase")
    {
        for (int i = 0; i < length; i ++)
        {
            int r = rand() % 2 + 1;
            if (r == 1)
            {
                cout << (char)(rand() % ('z' - 'a' + 1) + 'a');
            }
            else if (r == 2)
            {
                cout << (char)(rand() % ('Z' - 'A' + 1) + 'A');
            }
        }
    }
}

void random_number()
{
    long long from, to;
    cin >> from >> to;
    long long length;
    cin >> length;
    if (length < 1)
    {
        length = rand();
    }
    for (int i = 0; i < length; i ++)
    {
        cout << rand() % (to - from + 1) + from << " ";
    }
}

int main()
{
    freopen("input_request.txt", "r", stdin);
    freopen("check.inp", "w", stdout);
    srand(time(NULL));
    string s;
    while (cin >> s)
    {
        Lowercase(s);
        if (s == "string")
        {
            random_string();
        }
        else if (s == "number")
        {
            random_number();
        }
        else if (s == "space")
        {
            cout << " ";
        }
        else if (s == "next")
        {
            cout << el;
        }
    }
    return 0;
}
/*sol*/