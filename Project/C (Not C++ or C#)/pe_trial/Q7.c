#include <stdio.h>
#include <string.h>

int main()
{
    char str[21];
    int len, start;

    gets(str);
    len = strlen(str);

    if (len > 5 && len < 20 && len % 2 == 1)
    {
        start = (len - 5) / 2;

        printf("OUTPUT:\n");
        for (int i = start; i < start + 5; i++)
        {
            printf("%c", str[i]);
        }
    }
    else
    {
        printf("Invalid input.\n");
    }
}
