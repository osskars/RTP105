#include <stdio.h>

int main(void)
{
    int first_number, second_number;

    //pirmais skaitlis
    printf("Enter the first number:");
    scanf("%d", &first_number);

    //otrais skaitlis
    printf("Enter the second number:");
    scanf("%d", &second_number);

    //reizinajums
    int result = first_number * second_number;

    //attelojums
    printf("The result is: %d\n",result);

    return 0;
}
