#include <stdio.h>
int main()
{
    char age,name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    printf("Enter Surname: ");
    fgets(name, sizeof(name), stdin);
    printf("Surname: ");
    puts(name);    //display string
    char name[30]
    printf("Enter Age: ");
    fgets(age, sizeof(age), stdin);  //read string
    printf("Age: ");
    puts (age);		//display string
    return 0;
}
