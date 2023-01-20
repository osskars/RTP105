#include<stdio.h>
#include<math.h>

void my_exp(double, int, double*, long double*, long double*);

int main( )
{
    double x, y, my;
    long double aE499 = 1.L, aE500 = 1.L;
    int k = 500;
    printf("Y=e^(x) calculation\n");
    printf("Ievadiet argumentu x:");
    scanf("%lf", &x);

    y = exp(x);
    printf("Standarta funkcija e^(%f) = %f\n",x,y);

    my_exp(x, k, &my, &aE499, &aE500);
    printf("Mana funkcija my_exp(%f) = %f\n",x ,my);
    printf("a%d = %Le\n", k-1, aE499);
    printf("a%d = %Le\n", k, aE500);

    printf("\n");
    printf("                           %d\n", k);
    printf("                           ___\n");
    printf("                         \\                x^k\n");
    printf("      e^(x) = >            __         ___________  \n");
    printf("\n");
    printf("                         /____/            k!   \n");
    printf("                         k=0            \n");
    printf("\n");
    printf("                             x\n");
    printf("Rekurences reizinatajs = __________\n");
    printf("\n");
    printf("                             k\n");

    return 0;
}

void my_exp(double x, int i, double* my, long double* aE499, long double* aE500)
{
    long double a = 1.L , s = 0.0, a_1= 1.L;
    long double a499 = 1.L, a500 = 1.L;
    int n=0;
    a = 1;//n=0  x^n/n!
    s = a ;

    while(n<i)
    {
        n++;
        a = a * (x/n);
        s = s + a ;
    }
    *my = s;
    *aE499 = a_1;
    *aE500 = a;
}
