#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    n++;
    while (!(sqrt(n) == trunc(sqrt(n)))){n++;}
    cout << n;
}