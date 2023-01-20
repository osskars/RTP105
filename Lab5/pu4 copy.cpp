#include <stdio.h>
#include <limits.h>

int main() {
    char data_type;
    double num, factorial = 1;
    int i;

    printf("Please enter a decimal number\n: ");
    scanf("%lf", &num);

    printf("Please enter data type (c for char, i for int, l for long long\n): ");
    scanf(" %c", &data_type);

// for c
    if (data_type == 'c') {
        if (num > CHAR_MAX) {
            printf("Cannot calculate factorial for this number with char data type\n");
            return 0;
        }
        for (i = 1; i <= num; i++) {
            factorial *= i;
            if (factorial > CHAR_MAX) {
                printf("Cannot calculate factorial for this number with char data type\n");
                return 0;
            }
        }
// for i
    } else if (data_type == 'i') {
        if (num > INT_MAX) {
            printf("Cannot calculate factorial for this number with int data type\n");
            return 0;
        }
        for (i = 1; i <= num; i++) {
            factorial *= i;
            if (factorial > INT_MAX) {
                printf("Cannot calculate factorial for this number with int data type\n");
                return 0;
            }
        }
// for l
    } else if (data_type == 'l') {
        if (num > LONG_LONG_MAX) {
            printf("Cannot calculate factorial for this number with long long data type\n");
            return 0;
        }
        for (i = 1; i <= num; i++) {
            factorial *= i;
            if (factorial > LONG_LONG_MAX) {
                printf("Cannot calculate factorial for this number with long long data type\n");
                return 0;
            }
        }
    } else {
        printf("Invalid input, please enter either 'c', 'i' or 'l'\n");
        return 0;
    }

    printf("Factorial of %lf is %lf\n", num, factorial);

    return 0;
   }
