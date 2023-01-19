
#include <stdio.h>


int main() {
    int num1, num2, num3, temp;
    char order;

    printf("Please enter three decimal numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    printf("Please enter 'a' for ascending order or 'd' for descending order: ");
    scanf(" %c", &order);

    if (order == 'a') 
    {
        // augoša
        if (num1 > num2) {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 > num3) {
            temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 > num2) {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        }
         else if (order == 'd') 
    {
        // dilstoša
        if (num1 < num2) {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
        if (num2 < num3) {
            temp = num2;
            num2 = num3;
            num3 = temp;
        }
        if (num1 < num2) {
            temp = num1;
            num1 = num2;
            num2 = temp;
        }
    }
        else 
    {
        printf("Invalid input, please enter either 'a' or 'd'\n");
        return 0;
    }

    printf("The sorted numbers are: %d %d %d\n", num1, num2, num3);

    return 0;
}
