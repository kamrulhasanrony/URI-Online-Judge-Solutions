/* 1021 - Banknotes and Coins */

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,k,l,m;
    double n;
    scanf("%lf", &n);
    m=n*100;
    a=m/10000;
    m=m%10000;
    b=m/5000;
    m=m%5000;
    c=m/2000;
    m=m%2000;
    d=m/1000;
    m=m%1000;
    e=m/500;
    m=m%500;
    f=m/200;
    m=m%200;
    g=m/100;
    m=m%100;
    h=m/50;
    m=m%50;
    i=m/25;
    m=m%25;
    j=m/10;
    m=m%10;
    k=m/5;
    m=m%5;
    l=m/1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", b);
    printf("%d nota(s) de R$ 20.00\n", c);
    printf("%d nota(s) de R$ 10.00\n", d);
    printf("%d nota(s) de R$ 5.00\n", e);
    printf("%d nota(s) de R$ 2.00\n", f);

    printf("MOEDAS:\n");

    printf("%d moeda(s) de R$ 1.00\n", g);
    printf("%d moeda(s) de R$ 0.50\n", h);
    printf("%d moeda(s) de R$ 0.25\n", i);
    printf("%d moeda(s) de R$ 0.10\n", j);
    printf("%d moeda(s) de R$ 0.05\n", k);
    printf("%d moeda(s) de R$ 0.01\n", l);

    return 0;
}
