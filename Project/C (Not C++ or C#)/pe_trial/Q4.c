#include <stdio.h>

int main()
{
    int length = 7;
    int a[length];
    int temp;
    int i;
    for (i = 0; i < length; i ++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < length - 1; i++)
    {
        int j;
        for (j = i + 1; j < length; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("OUTPUT:\n");
    for (int i = 0; i < length; i++) {
        printf("%c", a[i]);
        if (i < 3) {
            printf(" ");
        }
    }

}