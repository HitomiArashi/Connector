#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    // Bai 5
    int n, i;
    bool nt = true;
    scanf("%d", &n);
    if (n < 2)
        nt = false;
    for (i = 2; i < n; i ++)
    {
        if (n % i == 0)
            nt = false;
    }
    if (nt == true)
        printf("%d la so nguyen to.", n);
    else
        printf("%d khong la so nguyen to.", n);
    // Bai 6
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    int c = (a < b ? a : b);
    int res = -1;
    for (i = 1; i <= c; i ++)
    {
        if (a % i == 0 && b % i == 0)
        {
            res = i;
        }
    }
    printf("%d la UCLN cua %d va %d", res, a, b);
}