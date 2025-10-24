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

//Note: Đoạn con thứ nhất ở phía sau đoạn con thứ hai
ll working (ll L_st, ll R_st, ll L_nd, ll R_nd)
{
    ll res = 0;
    /*
    Xét các TH:
    + TH1: Đoạn con thứ nhất giao một phần đoạn con thứ hai (L_st < L_nd, R_st < R_nd)
    + TH2: Đoạn con thứ nhất trùng mút cuối đoạn con thứ hai (L_st < L_nd, R_st == R_nd)
    + TH3: Đoạn con thứ nhất trùng mút đầu đoạn con thứ hai (L_st == L_nd, R_st < R_nd)
    + TH4: Đoạn con thứ nhất trùng cả hai đầu đoạn con thứ hai (L_st == L_nd, R_st == R_nd)
    + TH5: Đoạn con thứ nhất nằm hoàn toàn trong đoạn con thứ hai (L_st > L_nd, R_st < R_nd)
    */
    if (L_st < L_nd && R_st < R_nd)
    {
        //TH1
        res = (R_st - L_st) /*Độ dài đoạn con thứ nhất*/ + (R_nd - L_nd) /*Độ dài đoạn con thứ hai*/ - (R_st - L_nd) /*Độ dài đoạn giao nhau*/;
    }
    if (L_st < L_nd && R_st == R_nd)
    {
        //TH2
        res = (R_st - L_st) /*Độ dài đoạn con thứ nhất - Đoạn con bao ngoài*/;
    }
    if (L_st == L_nd && R_st < R_nd)
    {
        //TH3
        res = (R_nd - L_nd) /*Độ dài đoạn con thứ hai - Đoạn con bao ngoài*/;
    }
    if (L_st >= L_nd && R_st <= R_nd)
    {
        //TH4 + 5
        res = (R_st - L_st) /*Độ dài đoạn con bất kỳ*/;
    }
    return res;
}

int main()
{
    //Giao nhau khi L_nd < R_st && L_nd > L_st
    freopen("DOAN.inp", "r", stdin);
    freopen("DOAN.out", "w", stdout);
    ll L[3], R[3];
    for (int i = 0; i < 3; i ++)
    {
        cin >> L[i] >> R[i];
    }
    ll res = 0;
    //Đoạn con có độ dài dài nhất
    res = max(res, max((R[0] - L[0]) /*Độ dài đoạn con thứ nhất*/, max((R[1] - L[1]) /*Độ dài đoạn con thứ hai*/, (R[2] - L[2]) /*Độ dài đoạn con thứ bai*/)));
    //Đoạn con 0 - Đoạn con 1
    if (L[0] <= R[1] && L[0] >= L[1])
    {
        res = max(res, working(L[1], R[1], L[0], R[0]));
    }
    if (L[1] <= R[0] && L[1] >= L[0])
    {
        res = max(res, working(L[0], R[0], L[1], R[1]));
    }
    //Đoạn con 0 - Đoạn con 2
    if (L[0] <= R[2] && L[0] >= L[2])
    {
        res = max(res, working(L[2], R[2], L[0], R[0]));
    }
    if (L[2] <= R[0] && L[2] >= L[0])
    {
        res = max(res, working(L[0], R[0], L[2], R[2]));
    }
    //Đoạn con 1 - Đoạn con 2
    if (L[1] <= R[2] && L[1] >= L[2])
    {
        res = max(res, working(L[2], R[2], L[1], R[1]));
    }
    if (L[2] <= R[1] && L[2] >= L[1])
    {
        res = max(res, working(L[1], R[1], L[2], R[2]));
    }
    cout << res;
    return 0;
}
/*sol*/