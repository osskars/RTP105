#include <stdio.h>
#include <string.h>

int main()
{
    printf("Enter a decimal number: ");
    double n;
    scanf("%lf", &n);

    if(n<0){
        printf("Error: Factorial of a negative number is not possible\n");
        return 0;
    }

    printf("Select a data type (char, int, long long): ");
    char data_type[10];
    fgets(data_type, sizeof data_type, stdin);
    data_type[strcspn(data_type, "\r\n")] = 0; // remove newline character

    int is_valid_data_type = 0;
    double result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }

    if (strcmp(data_type, "char") == 0)
    {
        printf("The factorial of %lf is %lf\n", n, result);
        is_valid_data_type = 1;
    }
    else if (strcmp(data_type, "int") == 0)
    {
        printf("The factorial of %lf is %lf\n", n, result);
        is_valid_data_type = 1;
    }
    else if (strcmp(data_type, "long long") == 0)
    {
        printf("The factorial of %lf is %lf\n", n, result);
        is_valid_data_type = 1;
    }

    if(!is_valid_data_type){
        printf("Error: Invalid data type %s.\n", data_type);
    }

    return 0;
}
