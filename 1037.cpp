/* 1037 - Interval */

#include<stdio.h>
int main()
{
    double a;
    scanf("%lf", &a);

    if(a>=0 && a<=25.0000)
        printf("Intervalo [0,25]\n");
    else if(a>=25.00001 && a<=50.0000000)
        printf("Intervalo (25,50]\n");
    else if(a>50.0000001 && a<=75.0000000)
        printf("Intervalo (50,75]\n");
    else if(a>75.0000001 && a<=100.0000000)
        printf("Intervalo (75,100]\n");
    else
        printf("Fora de intervalo\n");

    return 0;
}
