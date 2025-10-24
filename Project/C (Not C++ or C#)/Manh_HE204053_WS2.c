#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Function prototypes for Question 1
void reverseDigits();
void sumDigitsToOne();
void sumArithmeticProgression();

// Function prototypes for Question 2
void printRightTriangle();
void printEquilateralTriangle();
void printPascalTriangle();

// Helper function to get integer input
int getIntegerInput(char* prompt);
void waitForKeystroke();


void question1Menu() {
    char choice;
    do {
        system("cls || clear");
        printf("\n[1]. Quession 1\n");
        printf("[a]. Reverse digits of a number\n");
        printf("[b]. Sum digits until one digit\n");
        printf("[c]. Sum of an arithmetic progression\n");
        printf("[B]. Back\n");
        printf("Your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                reverseDigits();
                waitForKeystroke();
                break;
            case 'b':
                sumDigitsToOne();
                waitForKeystroke();
                break;
            case 'c':
                sumArithmeticProgression();
                waitForKeystroke();
                break;
            case 'B':
                return;
            default:
                printf("Invalid choice. Please try again.\n");
                waitForKeystroke();
        }
    } while (1);
}

void question2Menu() {
    char choice;
    do {
        system("cls || clear");
        printf("\n[2]. Quession 2\n");
        printf("[a]. Display right-angled triangle\n");
        printf("[b]. Display equilateral triangle\n");
        printf("[c]. Display a Pascal triangle\n");
        printf("[B]. Back\n");
        printf("Your choice: ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'a':
                printRightTriangle();
                waitForKeystroke();
                break;
            case 'b':
                printEquilateralTriangle();
                waitForKeystroke();
                break;
            case 'c':
                printPascalTriangle();
                waitForKeystroke();
                break;
            case 'B':
                return;
            default:
                printf("Invalid choice. Please try again.\n");
                waitForKeystroke();
        }
    } while (1);
}


int main() {
    int choice;
    do {
        system("cls || clear");
        printInfoBox();
        printf("\n--- MENU ---\n");
        printf("[1]. Question 1\n");
        printf("[2]. Question 2\n");
        printf("[3]. Exit\n");
        printf("Your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                question1Menu();
                break;
            case 2:
                question2Menu();
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter 1, 2, or 3.\n");
                waitForKeystroke();
        }
    } while (choice != 3);

    return 0;
}

void printInfoBox() {
    printf("********************************************************************************\n");
    printf("*   Date          : 05/07/2025                                                 *\n");
    printf("*   Student Name  : Tran Quang Manh                                            *\n");
    printf("*   Student ID    : HE204053                                                   *\n");
    printf("********************************************************************************\n");
}

void waitForKeystroke() {
    printf("\nPress any button to continue...");
    _getch();
}

int getIntegerInput(char* prompt) {
    int num;
    printf("%s", prompt);
    scanf("%d", &num);
    // Clear the input buffer
    while (getchar() != '\n');
    return num;
}

// --- Question 1 Functions ---

void reverseDigits() {
    int n = getIntegerInput("Enter an integer: ");
    int reversedN = 0, remainder;
    int originalN = n;

    while (n != 0) {
        remainder = n % 10;
        reversedN = reversedN * 10 + remainder;
        n /= 10;
    }
    printf("The reverse of %d is %d\n", originalN, reversedN);
}

void sumDigitsToOne() {
    int n = getIntegerInput("Enter a non-negative number: ");
    int sum = n;

    if (n < 0) {
        printf("Input must be a non-negative number.\n");
        return;
    }

    while (sum >= 10) {
        int currentSum = 0;
        int temp = sum;
        while (temp > 0) {
            currentSum += temp % 10;
            temp /= 10;
        }
        sum = currentSum;
    }
    printf("The sum of digits until a single digit is: %d\n", sum);
}

void sumArithmeticProgression() {
    int start = getIntegerInput("Enter the starting number: ");
    int count = getIntegerInput("Enter the number of items: ");
    int diff = getIntegerInput("Enter the common difference: ");
    
    long long sum = (long long)count * (2 * start + (long long)(count - 1) * diff) / 2;

    printf("The sum of the arithmetic progression is: %lld\n", sum);
}


// --- Question 2 Functions ---

void printRightTriangle() {
    int height = getIntegerInput("Enter number of lines: ");
    char currentChar = 'A';

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%c ", currentChar++);
        }
        printf("\n");
    }
}

void printEquilateralTriangle() {
    int height = getIntegerInput("Enter number of lines: ");
    char currentChar = 'A';

    for (int i = 1; i <= height; i++) {
        // Print spaces
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        // Print characters
        for (int k = 1; k <= i; k++) {
            printf("%c ", currentChar++);
        }
        printf("\n");
    }
}

void printPascalTriangle() {
    int height = getIntegerInput("Enter number of rows: ");
    long long coef = 1;

    for (int i = 0; i < height; i++) {
        for (int space = 1; space <= height - i; space++) {
            printf("  ");
        }

        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == 0) {
                coef = 1;
            } else {
                coef = coef * (i - j + 1) / j;
            }
            printf("%4lld", coef);
        }
        printf("\n");
    }
}