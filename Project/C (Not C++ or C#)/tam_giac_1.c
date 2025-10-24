#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void duoi_trai(int n)
{
    int i, j;
    for(i = 1; i <= n; i ++)
    {
        for(j = 0; j < i; j ++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

void tren_trai(int n)
{
    int i, j;
    for (i = n; i > 0; i --)
    {
        for (j = 0; j < i; j ++)
        {
            printf("# ");
        }
        printf("\n");
    }
}

void tren_phai(int n)
{
    int i, j;
    for(i = n; i > 0; i --)
    {
        for(j = 1; j <= n; j ++)
        {
            if (j > n - i)
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void duoi_phai(int n)
{
    int i, j;
    for (i = n; i > 0; i --)
    {
        for (j = 1; j <= n; j ++)
        {
            if (j >= i)
            {
                printf("# ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    duoi_trai(n);
    printf("\n");
    tren_trai(n);
    printf("\n");
    tren_phai(n);
    printf("\n");
    duoi_phai(n);
}