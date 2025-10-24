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
    ll total_need, number_of_person;
    cin >> total_need >> number_of_person;
    vector <int> amount_of_milk(number_of_person);
    vector <pair<int, int> > price_and_order(number_of_person);
    for (int index = 0; index < number_of_person; index ++)
    {
        cin >> price_and_order[index].first; price_and_order[index].second = index;
        cin >> amount_of_milk[index];
    }
    sort(price_and_order.begin(), price_and_order.end());
    ll total_money = 0;
    for (int index = 0; index < number_of_person; index ++)
    {
        if (amount_of_milk[price_and_order[index].second] < total_need)
        {
            total_need -= amount_of_milk[price_and_order[index].second];
            total_money += amount_of_milk[price_and_order[index].second] * price_and_order[index].first;
        }
        else
        {
            total_money += total_need * price_and_order[index].first;
            break;
        }
    }
    cout << total_money;
    return 0;
}
/*sol*/