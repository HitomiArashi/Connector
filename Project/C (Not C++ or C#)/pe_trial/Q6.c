#include <stdio.h>
#include <string.h>

int main()
{
    char names[5][100];
    char temp[100];
    int i, j;

    for (i = 0; i < 5; i++)
    {
        gets(names[i]);
    }

    for (i = 0; i < 4; i++)
    {
        for (j = i + 1; j < 5; j++)
        {
            if (strcmp(names[i], names[j]) > 0)
            {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    printf("OUTPUT:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%s", names[i]);
        if (i < 4)
        {
            printf(" ");
        }
    }
}
