#include <stdio.h>

int main()
{
    char ch[4];
    char temp;
    int i;
    for (i = 0; i < 4; i ++)
    {
        scanf(" %c", &ch[i]);
    }

    for (i = 0; i < 3; i++)
    {
        int j;
        for (j = i + 1; j < 4; j++)
        {
            if (ch[i] > ch[j])
            {
                temp = ch[i];
                ch[i] = ch[j];
                ch[j] = temp;
            }
        }
    }

    printf("OUTPUT:\n");
    for (int i = 0; i < 4; i++) {
        printf("%c", ch[i]);
        if (i < 3) {
            printf(" ");
        }
    }
}