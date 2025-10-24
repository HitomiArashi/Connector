#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("TREE.INP", "r", stdin);
    freopen("TREE.OUT", "w", stdout);
    int N;
    cin >> N;
    vector<int> chieuCao(N);
    for (int i = 0; i < N; ++i) {
        cin >> chieuCao[i];
    }
    //phần dưới tính số cây cần loại bỏ để hàng cây tăng dần
    int loaiBoTangDan = 0;
    int chieuCaoMax = chieuCao[0];
    for (int i = 1; i < N; ++i) {
        if (chieuCao[i] > chieuCaoMax) {
            chieuCaoMax = chieuCao[i];
        } else {
            loaiBoTangDan++;
        }
    }
    //phần này tính số cây cần loại bỏ để hàng cây giảm dần
    int loaiBoGiamDan = 0;
    int chieuCaoMin = chieuCao[N - 1];
    for (int i = N - 2; i >= 0; --i) {
        if (chieuCao[i] < chieuCaoMin) {
            chieuCaoMin = chieuCao[i];
        } else {
            loaiBoGiamDan++;
        }
    }
    //chọn số cây cần loại bỏ là min của hai kết quả trên
    cout << min(loaiBoTangDan, loaiBoGiamDan)<<endl;
    return 0;
    //fclose(stdin);
    //fclose(stdout);
}
/* hint 
Bước 1:
Tính số lượng cây cần loại bỏ để hàng cây thỏa mãn một trong hai điều kiện: chiều cao tăng dần hoặc giảm dần khi nhìn từ đầu hàng.
Bước 2:
Để hàng cây tăng dần, ta cần đảm bảo chiều cao của các cây nhìn từ đầu hàng phải tăng dần.
Để hàng cây giảm dần, ta cần đảm bảo chiều cao của các cây nhìn từ đầu hàng phải giảm dần.
Bước 3: 
Duyệt mảng chiều cao từ trái sang phải để tính số cây cần loại bỏ để hàng cây tăng dần.
Duyệt mảng chiều cao từ phải sang trái để tính số cây cần loại bỏ để hàng cây giảm dần.
Chọn số cây cần loại bỏ là tối thiểu giữa hai kết quả trên.

Đầu vào: N, chieuCao[N]
Đầu ra: ketQua

loaiBoTangDan = 0
chieuCaoMax = chieuCao[0]

// Tính số cây cần loại bỏ để hàng cây tăng dần
for i từ 1 đến N-1:
    Nếu chieuCao[i] > chieuCaoMax:
        chieuCaoMax = chieuCao[i]
    Ngược lại:
        loaiBoTangDan++

loaiBoGiamDan = 0
chieuCaoMin = chieuCao[N-1]
Tính số cây cần loại bỏ để hàng cây giảm dần
for i từ N-2 đến 0:
    Nếu chieuCao[i] < chieuCaoMin:
        chieuCaoMin = chieuCao[i]
    Ngược lại:
        loaiBoGiamDan++

Chọn số cây cần loại bỏ là tối thiểu giữa hai kết quả trên
Đầu ra: min(loaiBoTangDan, loaiBoGiamDan) */