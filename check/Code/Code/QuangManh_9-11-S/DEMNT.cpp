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
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    freopen("DEMNT.inp", "r", stdin);
    freopen("DEMNT.out", "w", stdout);
    vector <bool> Eratos((int)(1e7 + 1), true);
    vector <int> prime;
    Eratos[0] = false;
    Eratos[1] = false;
    for (int i = 0; i * i <= (int)(1e7); i ++)
    {
        if (Eratos[i] == true)
        {
            prime.push_back(i);
            for (int j = i * i; j <= (int)(1e7); j += i)
            {
                Eratos[j] = false;
            }
        }
    }
    ll a, b;
    cin >> a >> b;
    int pos_a = (int)(lower_bound(prime.begin(), prime.end(), a) - prime.begin());
    int pos_b = (int)(upper_bound(prime.begin(), prime.end(), b) - prime.begin());
    cout << pos_b - pos_a;
    return 0;
}
/*sol*/