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
// Phép nhân Ấn Độ (a * b) % mod. Sử dụng để tránh tràn số khi thực hiện phép nhân.
int indian_multiplication(int a, int b, int mod)
{
    if (b == 0)
        return 0;

    int half = indian_multiplication(a, b / 2LL, mod) % mod;

    if (b & 1)
        return (half + half + a) % mod;
    else
        return (half + half) % mod;
}

// Tính (a^b) % mod. Sử dụng kết hợp với phép nhân Ấn Độ để tránh tràn số khi thực hiện phép nhân.
int modular_exponentiation(int a, int b, int mod)
{
    if (b == 0)
        return 1LL;

    int half = modular_exponentiation(a, b / 2LL, mod) % mod;
    int product = indian_multiplication(half, half, mod);

    if (b & 1)
        return indian_multiplication(product, a, mod);
    else
        return product;
}

vector < int > eratosthenes_sieve(int max_value)
{
    vector < bool > is_prime(max_value + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= max_value; ++i)
        if (is_prime[i])
            for (int j = i * i; j <= max_value; j += i)
                is_prime[j] = false;

    vector < int > primes;
    for (int i = 2; i <= max_value; ++i)
        if (is_prime[i])
            primes.push_back(i);

    return primes;
}

// Kiểm tra nguyên tố Miller - Rabin k lần.
bool check_prime_by_miller_rabin(int n, int k)
{
    // Xử lý trước các trường hợp đặc biệt.
    if (n < 2)
        return false;

    if (n != 2 && n % 2 == 0)
        return false;

    // Tìm d là số lẻ sao cho n - 1 = 2^r * d và r != 0.
    // Sau khi tìm ra d, r sẽ bằng số lần nhân 2 vào d để tiến tới n - 1.
    int d = n - 1;
    while (d % 2 == 0)
        d /= 2;

    // Bắt đầu kiểm tra .
    for (int i = 1; i <= k; ++i)
    {
        // Chọn a là một số ngẫu nhiên trong đoạn [2, n - 1].
        int a = rand() % (n - 1) + 1;
        int temp = d;
        
        // Tính a^d % n.
        int mod_val = modular_exponentiation(a, temp, n);

        // Trong khi d != n và a^(2^k * d) % n != 1 và a^(2^k * d) % n != (n - 1).
        // Bước này bản chất là thử kiểm tra mọi x(k) % n với k = 0...r.
        while (temp != n - 1 && mod_val != 1 && mod_val != n - 1)
        {
            mod_val = indian_multiplication(mod_val, mod_val, n);
            temp *= 2;
        }

        // Nếu không thể chạm được tới x(r) thì nghĩa là đã tồn tại giá trị k khiến cho
        // a^(2^k * d) % n != 1 hoặc a^(2^k * d) % n != -1
        if (mod_val != n - 1 && temp % 2 == 0)
            return false;
    }

    return true;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("TNUM.inp", "r", stdin);
    freopen("TNUM.out", "w", stdout);
    
    int number_of_test;
    cin >> number_of_test;
    cin.ignore();
    while (number_of_test --)
    {
        solve();
    }
}

inline void solve()
{
    ll n;
    cin >> n;
    ll s = sqrt(n);
    if (s * s == n)
    {
        if (check_prime_by_miller_rabin(s, 10) == true)
        {
            cout << yes << el;
        }
        else
        {
            cout << no << el;
        }
        
    }
    else
    {
        cout << no << el;
    }
    
}