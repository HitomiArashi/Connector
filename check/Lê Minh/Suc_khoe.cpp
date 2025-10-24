/*
Bạn A đi khám sức khỏe định kỳ, để biết tỉ lệ cơ thể của mình đang cân đối hay hơi gầy. A
dựa trên công thức tính chỉ số BMI (cân nặng / chiều cao^2). Hãy viết một chương trình
giúp A việc này với cân nặng (kg) và chiều cao nhập (mét) vào từ bàn phím. Hãy hiện ra
màn hình thông báo sức khỏe của A với các điều kiện:
+ Nếu BMI < 18.5: In "Bạn hơi gầy, cần ăn bổi bổ thêm"
+ Nếu 18.5 <= BMI < 25: In "Cơ thể cân đối"
+ Nếu BMI >= 25: In "Bạn đang hơi thừa cần, cần ăn uống lành mạnh hơn"
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

    float weight, height, BMI;
    cin >> weight >> height;
    BMI = weight / (height * height);
    if (BMI >= 25)
        cout << "Bạn đang hơi thừa cần, cần ăn uống lành mạnh hơn.";
    else if (BMI >= 18.5)
        cout << "Cơ thể cân đối.";
    else
        cout << "Bạn hơi gầy, cần ăn bổi bổ thêm.";

    //Nếu cần lấy thời gian chạy thì bỏ dòng "return 0;" này.
    return 0;

    clock_t finish = clock();
    cout << el << "Time run: " << (float)(finish - start) / CLOCKS_PER_SEC << " s";
    return 0;
}
/*sol*/