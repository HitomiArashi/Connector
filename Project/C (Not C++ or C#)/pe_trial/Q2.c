#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    n -= n % 2;
    printf("OUTPUT:\n");
    printf("%d", n + n - 2 + n - 4);
}