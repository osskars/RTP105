#include<cmath>
#include<stdio.h>

int main(){
    float a=34.33, b=1.5*M_1_PI, x, delta_x=1.e-3/*0.001*/, funkca, funkcb, funkcx;
    int k=0;
    funkca = exp(a); funkcb = exp(b);
    if (funkca*funkcb>0){
        printf("Intervaalaa [%.2f;%.2f] Y=e^(x) funkcijai",a,b);
        printf ("saknju nav( vai tajaa ir paaru saknju skaits )\n");
        return 1;
    }
    printf(" Y=e^(x)(%7.3f)=%7.3f\t\t\t\t",a,exp(a));
    printf("Y=e^(x)(%7.3f)=%7.3f\n", b, exp(b));

    while ((b-a)>delta_x){
        k++;
        x = (a+b)/2;
        if(exp(x)>0)
        a = x;
        else 
        b = x;
        printf ("%2d. iteraacija: Y=e^(x)(%7.3f)=%7.3f\t",k,a,exp(a));
        printf ("Y=e^(x)(%7.3f)=%7.3f\t",x,exp(x));
        printf ("exp(%7.3f)=%7.3f\n",b,exp(b));
    }
printf("Saakne atrodas pie x=%.3f, jo Y=e^(x) ir %.3f\n",x, exp(x));

return 0;
}
