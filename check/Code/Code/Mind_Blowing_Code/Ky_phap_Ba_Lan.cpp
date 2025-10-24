/*_______________________ STARTER _______________________*/
 
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define el cout << "\n"
#define ft first
#define sc second
#define all(x) (x).begin(), (x).end
#define pii pair <int,int>
#define on true
#define off false
#define skip continue;
#define N 1000000
using namespace std;
 
/*_______________________ SETTING _______________________*/
 
bool boost, file, multitest, preinput;
void setting();
void booster();
void file_worker();
 
/*________________ ALL VARIABLE USE HERE ________________*/
 
    string s;
    stack<char> comma;
    string ans;

/*_______________ SUPPORT PROGRAM GO HERE _______________*/
 
/*__________________ MAIN CODE GO HERE __________________*/
 
void prepare_before_input()
{
    
}
void getinput()
{
    getline(cin, s);
}
void solve()
{
    ans.clear();
    for (auto &x: s)
    {
        if (x == ' ')
        {
            continue;
        }
        else if (x >= '0' && x <= '9')
        {
            ans += x;
            ans += ' ';
        }
        else if (x >= 'a' && x <= 'z')
        {
            ans += x;
            ans += ' ';
        }
        else
        {
            if (comma.empty() == true)
                comma.push(x);
            else if (x == ')')
            {
                while (comma.top() != '(')
                {
                    ans += comma.top();
                    ans += ' ';
                    comma.pop();
                }
                comma.pop();
            }
            else if (x == '}')
            {
                while (comma.top() != '{')
                {
                    ans += comma.top();
                    ans += ' ';
                    comma.pop();
                }
                comma.pop();
            }
            else if (x == ']')
            {
                while (comma.top() != '[')
                {
                    ans += comma.top();
                    ans += ' ';
                    comma.pop();
                }
                comma.pop();
            }
            else if (x == '(' || x == '[' || x == '{')
                comma.push(x);
            else if (((x == '+' || x == '-') && (comma.top() == '*' || comma.top() == '/' || comma.top() == '^')) || ((x == '*' || x == '/') && comma.top() == '^'))
            {
                while (((x == '+' || x == '-') && (comma.top() == '*' || comma.top() == '/' || comma.top() == '^')) || ((x == '*' || x == '/') && comma.top() == '^'))
                {
                    ans += comma.top();
                    ans += ' ';
                    comma.pop();
                    if (comma.empty() == true)
                        break;
                }
                comma.push(x);
            }
            else
                comma.push(x);
        }
    }
    while (comma.empty() == false)
    {
        ans += comma.top();
        ans += ' ';
        comma.pop();
    }
    cout << ans;
}
int main()
{
    boost = on;
    file = on;
    multitest = off;
    preinput = off;
    setting();
    return 0;
}

/*__________________ VOID CODE GO HERE __________________*/
 
void setting()
{
    if (boost == on)
        booster();
    if (file == on)
        file_worker();
    if (preinput == on)
        prepare_before_input();
    if (multitest == on)
    {
        int number_of_test;
        cin >> number_of_test; cin.ignore();
        while (number_of_test --)
        { 
            getinput();
            solve(); el;
        }
    }
    else
    {
        getinput();
        solve();
    }
}
void booster()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void file_worker()
{
    freopen("check.inp","r",stdin);
    freopen("check.out","w",stdout);
}