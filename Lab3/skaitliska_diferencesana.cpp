#include <stdio.h>
#include <math.h>

double Y_exp(double x) {
    // Y=e^(x)
    return exp(x);
}

double Y_exp_derivative(double x) {
    // Y=e^'(x)
    return exp(x);
}

int main() {
    double a, b, c, f1, f2, x;

    printf("Lūdzu ievadiet pirmo vērtību: ");
    scanf("%lf", &a);
    printf("\nLūdzu ievadiet otro vērtību: ");
    scanf("%lf", &b);
    printf("\nLūdzu ievadiet trešo vērtību: ");
    scanf("%lf", &c);

    printf("\n        x            Y=e^(x)          Y=e^'(x)            Y=e^'(x)             Y=e^''(x)           Y=e^''(x)  \n"
           "                                    analītiskā formula    galīga atšķirība     analītiskā formula   galīga atšķirība\n");
    printf("\n");

    x = a;
    while (x < b) {
        double aa = Y_exp(x);
        double ab = Y_exp_derivative(x);
        double ac = (Y_exp(x + c) - Y_exp(x - c)) / (2 * c);
        double ad = (Y_exp(x + c) - 2 * Y_exp(x) + Y_exp(x - c)) / (c * c);
        f1 = (1 / (1 + pow(x + c, 2)));
        f2 = (1 / (1 + pow(x, 2)));
        double ae = (f1 - f2) / c;

        printf(" %10.3f\t%10.3f\t %10.3f\t   %10.3f\t       %10.3f\t   %10.3f\n", x, aa, ab, ac, ad, ae);
        x += c;
    }
    return 0;
}
