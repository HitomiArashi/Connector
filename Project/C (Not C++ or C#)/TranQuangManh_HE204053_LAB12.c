#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

void Cau_1()
{
    printf("--------------------Student Information--------------------\n");
    printf("Name    : Tran Quang Manh\n");
    printf("ID      : HE204053\n");
    printf("Class   : PRF192\n");
    printf("-----------------------------------------------------------\n");
}

void Cau_2()
{
    printf("--------------------Convert C to F--------------------\n");
    float Celsius;
    printf ("Input degree Centigrade:");
    scanf ("%f", &Celsius);
    float Fahrenheit = Celsius * 1.8 + 32;
    printf ("%f degrees Fahrenheit\n", Fahrenheit);
    printf("------------------------------------------------------\n");
}

void Cau_3()
{
    printf("--------------------Dog's age--------------------\n");
    float human_age;
    printf("Input a dog's age in human years: ");
    scanf("%f", &human_age);
    float dog_age;
    if (human_age <= 2)
    {
        dog_age = human_age * 10.5;
    }
    else
    {
        dog_age = 10.5 * 2 + (human_age - 2) * 4;
    }
    printf("The dog's age in dog's years is %lf\n", dog_age);
    printf("-------------------------------------------------\n");
}

void Cau_4()
{
    printf("--------------------Convert month--------------------\n");
    printf("List of months: January, February, March, April, May, June, July, August, September, October, November, December\n");
    char m[100];
    printf("Input the name of Month: %s", &m);
    if (m == "January" || m == "March" || m == "May" || m == "July" || m == "August" || m == "October" || m == "December")
    {
        printf("No. of day: 31 days\n");
    }
    else if (m == "February")
    {
        printf("No. of day: 28/29 days\n");
    }
    else if (m == "April" || m == "June" || m == "September" || m == "November")
    {
        printf("No. of day: 30 days\n");
    }
    printf("-----------------------------------------------------\n");
}

void Cau_5()
{
    printf("--------------------Check triangle--------------------\n");
    float x, y, z;
    printf("Input lengths of the triangle sides:\n");
    printf("x: "); scanf("%f", &x);
    printf("y: "); scanf("%f", &y);
    printf("z: "); scanf("%f", &z);
    if (x == y && y == z)
    {
        printf("Equilateral triangle\n");
    }
    else if ((x == y && x != z) || (x != y && y == z) || (x == z && x != y))
    {
        printf("Isosceles triangle\n");
    }
    else if (x != y && x != z && y != z)
    {
        printf("Normal triangle\n");
    }
    printf("------------------------------------------------------\n");
}

void Cau_6()
{
    printf("--------------------Quadratic function--------------------\n");
    float a, b, c;
    printf("a: "); scanf("%f", &a);
    printf("b: "); scanf("%f", &b);
    printf("c: "); scanf("%f", &c);
    float delta = b * b - 4 * a * c;
    if (delta < 0)
    {
        printf("There is no roots.\n");
    }
    else if (a == 0 && b == 0 && c == 0)
    {
        printf("There are infinite roots.\n");
    }
    else if (delta == 0)
    {
        printf("There is 1 roots: %lf\n", - (b / (2 * a)));
    }
    else
    {
        printf("There are 2 roots: %lf and %lf\n", - (b - sqrt(delta)) / 2 * a, - (b + sqrt(delta)) / 2 * a);
    }
    printf("----------------------------------------------------------\n");
}

void Cau_7()
{
    printf("--------------------next day--------------------\n");
    int y, m, d;
    bool isValid = false;
    while (isValid = false)
    {
        scanf("Input a year: %d", &y);
        scanf("Input a month [1-12]: %d", &m);
        scanf("Input a day [1-31]: %d", &d);
        if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && (d < 1 || d > 31))
        {
            printf("Invalid day. Input another valid day.\n");
        }
        else if ((m == 4 || m == 6 || m == 9 || m == 11) && (d < 1 || d > 30))
        {
            printf("Invalid day. Input another valid day.\n");
        }
        else if (m == 2 && (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) && (d < 1 || d > 29))
        {
            printf("Invalid day. Input another valid day.\n");
        }
        else if (m == 2 && (d < 1 || d > 28))
        {
            printf("Invalid day. Input another valid day.\n");
        }
        else
        {
            isValid = true;
        }
    }

    if (d == 31 && m == 12)
    {
        d = 1;
        m = 1;
        y += 1;
    }
    else if (d == 29 && m == 2 && (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)))
    {
        d += 1;
    }
    else if (d == 28 && m == 2 && !(y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)))
    {
        d = 1;
        m += 1;
    }
    else if (d == 30 && (m == 4 || m == 6 || m == 9 || m == 11))
    {
        d = 1;
        m += 1;
    }
    else if (d == 31 && (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10))
    {
        d = 1;
        m += 1;
    }
    else
    {
        d += 1;
    }
    printf ("The next day is [yyyy-mm-dd] %d-%d-%d.\n", y, m, d);
    printf("------------------------------------------------\n");
}

void Cau_8()
{
    printf("--------------------Area regular polygon--------------------\n");
    int side;
    double length;
    double area;
    bool isValid = false;
    while (isValid == false)
    {
        scanf("Input number of sides: %d", &side);
        scanf("Input the length of a side: %lf", &length);
        if (side < 3)
        {
            printf("A polygon must have at least 3 sides.\n");
        }
        else
        {
            isValid = true;
        }
    }
    area = (side * length * length) / (4 * tan(180 / side));
    printf("The area of the polygon is: %lf\n", area);
    printf("------------------------------------------------------------\n");
}

int __gcd(int a, int b)
{
    if(a == 0 || b == 0){
        return a + b;
    }
    int min = a < b ? a : b;
    for(int i = min; i >= 1; i--){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
    return 1;
}

void Cau_9()
{
    printf("--------------------Fractions--------------------\n");
    int a1, b1, a2, b2;
    scanf("%d", &a1);
    scanf("%d", &b1);
    scanf("%d", &a2);
    scanf("%d", &b2);
    int b_n = b1 * b2 / __gcd(b1, b2);
    int a1_n = b_n / b1 * a1, a2_n = b_n / b2 * a2;
    int a_p = a1_n + a2_n, b_p = b_n;
    int t = __gcd(a_p, b_p);
    a_p = a_p / t;
    b_p = b_p / t;
    printf("%d/%d + %d/%d = %d/%d\n", a1, b1, a2, b2, a_p, b_p);
    int a_m = a1_n - a2_n, b_m = b_n;
    t = __gcd(a_m, b_m);
    a_m = a_m / t;
    b_m = b_m / t;
    printf("%d/%d - %d/%d = %d/%d\n", a1, b1, a2, b2, a_m, b_m);
    int a_t = a1 * a2, b_t = b1 * b2;
    t = __gcd(a_t, b_t);
    a_t = a_t / t;
    b_t = b_t / t;
    printf("%d/%d * %d/%d = %d/%d\n", a1, b1, a2, b2, a_t, b_t);
    int a_d = a1 * b2, b_d = b1 * a2;
    t = __gcd(a_d, b_d);
    a_d = a_d / t;
    b_d = b_d / t;
    printf("%d/%d / %d/%d = %d/%d\n", a1, b1, a2, b2, a_d, b_d);
    printf("-------------------------------------------------\n");
}

int main() {
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
        printf("X. Exit\n");
        printf("Choose: ");
        scanf("%c", &choice);

        switch (choice) {
            case '1': printStudentInfo(); break;
            case '2': celsiusToFahrenheit(); break;
            case '3': dogAge(); break;
            case '4': monthDays(); break;
            case '5': triangleType(); break;
            case '6': solveQuadratic(); break;
            case '7': nextDay(); break;
            case '8': polygonArea(); break;
            case '9': fractionOperations(); break;
            case 'X': printf("Goodbye!\n"); break;
            default: printf("Invalid choice.\n");
        }

    } while (choice != '1' && choice != '2' && choice != '3' && choice != '4' && choice != '5' && choice != '6' && choice != '7' && choice != '8' && choice != '9' && choice != 'X');

    return 0;
}