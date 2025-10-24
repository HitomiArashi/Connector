#include <stdio.h>
#include <math.h>

int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("OUTPUT:\n");
    if (a < b)
    {
        printf("a<b");
    }
    else if (a > b)
    {
        printf("a>b");
    }
    else
    {
        printf("a=b");
    }
}