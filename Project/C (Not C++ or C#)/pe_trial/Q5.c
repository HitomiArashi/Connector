#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    int i;
    int a[n];
    for (i = 0; i < n; i ++)
    {
        scanf("%d", &a[i]);
    }
    int mid = n / 2;
    bool symmetric = true;
    for (i = 0; i < mid; i ++)
    {
        if (a[i] != a[n - i - 1])
        {
            symmetric = false;
            break;
        }
    }
    if (symmetric == true)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }
}