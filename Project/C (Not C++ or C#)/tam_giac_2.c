#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void duoi_trai_so(int n)
{
    int i, j;
    for(i = 1; i <= n; i ++)
    {
        for(j = 1; j <= i; j ++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void tren_phai_so(int n)
{
    int i, j, base = 0;
    for(i = n; i > 0; i --)
    {
        for(j = 1; j <= n; j ++)
        {
            if (j > n - i)
            {
                printf("%d ", j - base);
            }
            else
            {
                printf("  ");
            }
        }
        base ++;
        printf("\n");
    }
}

void duoi_phai_so(int n)
{
    int i, j;
    for (i = n; i > 0; i --)
    {
        for (j = 1; j <= n; j ++)
        {
            if (j >= i)
            {
                printf("%d ", n - j + 1);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void tren_trai_so(int n)
{
    int i, j;
    for (i = n; i > 0; i --)
    {
        for (j = i; j > 0; j --)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    duoi_trai_so(n);
    printf("\n");
    tren_phai_so(n);
    printf("\n");
    duoi_phai_so(n);
    printf("\n");
    tren_trai_so(n);
    printf("\n");
}