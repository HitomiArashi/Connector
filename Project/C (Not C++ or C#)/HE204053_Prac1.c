#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void Cau_1()
{
    int a, i, j;
    scanf("%d", &a);
    for (i = 1; i <= a; i ++)
    {
        for(j = 1; j <= i; j ++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}

void Cau_2()
{
    int a, i, j;
    scanf("%d", &a);
    for (i = 1; i <= a; i ++)
    {
        for(j = 1; j <= i; j ++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
}

void Cau_3()
{
    int a, i, j, count = 1;
    scanf("%d", &a);
    for (i = 1; i <= a; i ++)
    {
        for(j = 1; j <= i; j ++)
        {
            printf("%d", count);
            count ++;
        }
        printf("\n");
    }
}

void Cau_4()
{
    int a, i, j, count = 1;
    scanf("%d", &a);
    for (i = 1; i <= a; i ++)
    {
        for (j = 0; j < a - i; j ++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j ++)
        {
            printf("%d ", count);
            count ++;
        }
        printf("\n");
    }
}

void Cau_5()
{
    int a, i, j;
    scanf("%d", &a);
    for (i = 1; i <= a; i ++)
    {
        for (j = 0; j < a - i; j ++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j ++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

void Cau_6()
{
    int a, i, j;
    scanf("%d", &a);
    for (i = 1; i <= a; i ++)
    {
        for (j = 0; j < a - i; j ++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j ++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void Cau_7()
{
    int x, n;
    scanf("%d", &x);
    scanf("%d", &n);
    int res = 0, temp = 1;
    int i, j;
    for (i = 0; i < n; i ++)
    {
        temp = 1;
        for(j = 0; j < 1 + i * 2; j ++)
        {
            temp *= x;
        }
        res += (i % 2 == 0 ? temp : - temp);
    }
    printf("%d\n", res);
}

bool check_Amstrong(int n)
{
    int sum_cdigit = 0;
    int comp = n;
    while (n > 0)
    {
        int temp = n % 10;
        sum_cdigit += (temp * temp * temp);
        n /= 10;
    }
    if (sum_cdigit == comp)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool check_perfect(int n)
{
    int sum = 0;
    int i;
    for (i = 1; i < n; i ++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Cau_8()
{
    int n;
    scanf("%d", n);
    if (check_Amstrong(n) == true)
    {
        printf("%d la so Amstrong", n);
    }
    else
    {
        prontf("%d khong phai la so Amstrong", n);
    }
    if (check_perfect(n) == true)
    {
        printf("%d la so hoan hao", n);
    }
    else
    {
        printf("%d khong phai la so hoan hao", n);
    }
    printf("\n");
}

void Cau_9()
{
    int n;
    scanf("%d", &n);int binary[32];
    int i = 0;
    if (n == 0) {
        printf("0");
        return;
    }
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main()
{
    char choice;
    do {
        printf("\n------ MENU ------\n");
        printf("[1]. Cau 1\n");
        printf("[2]. Cau 2\n");
        printf("[3]. Cau 3\n");
        printf("[4]. Cau 4\n");
        printf("[5]. Cau 5\n");
        printf("[6]. Cau 6\n");
        printf("[7]. Cau 7\n");
        printf("[8]. Cau 8\n");
        printf("[9]. Cau 9\n");
        printf("[0]. Exit\n");
        printf("Choose: ");
        scanf("%c", &choice);

        switch (choice) {
            case '1': Cau_1(); break;
            case '2': Cau_2(); break;
            case '3': Cau_3(); break;
            case '4': Cau_4(); break;
            case '5': Cau_5(); break;
            case '6': Cau_6(); break;
            case '7': Cau_7(); break;
            case '8': Cau_8(); break;
            case '9': Cau_9(); break;
            case '0': printf("Goodbye!\n"); break;
            default: printf("Invalid choice.\n");
        }

    } while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6' && choice != '7' && choice != '8' && choice != '9' && choice != '0');

    return 0;
}