/* 1010 - Simple Calculate */

#include <stdio.h>
int main()


{
int code,units;
float price,a,b;
scanf("%d %d %f\n", &code, &units, &price);
a= units*price;//a = first total
scanf("%d %d %f", &code, &units, &price);
b= units*price;//b= second total
printf("VALOR A PAGAR: R$ %.2f\n", a+b);

    return 0;
}
