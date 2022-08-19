/* 1018 - Banknotes */

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h;
    scanf("%d", &a);
    printf("%d\n",a);
    b=a/100;
    printf("%d nota(s) de R$ 100,00\n", b);

    c=(a%100)/50;
    printf("%d nota(s) de R$ 50,00\n", c);

    d=((a%100)%50)/20;
    printf("%d nota(s) de R$ 20,00\n", d);

    e=((a%100)%50)%20/10;
    printf("%d nota(s) de R$ 10,00\n", e);

    f=(((a%100)%50)%20)%10/5;
    printf("%d nota(s) de R$ 5,00\n", f);

    g=((((a%100)%50)%20)%10)%5/2;
    printf("%d nota(s) de R$ 2,00\n", g);

    h=(((((a%100)%50)%20)%10)%5)%2/1;
    printf("%d nota(s) de R$ 1,00\n", h);

    return 0;
}
