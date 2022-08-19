/* 2175 - What is the Fastest? */

#include<stdio.h>

int main()
{
    int Otavio,Bruno,Ian;
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a<b && a<c)printf("Otavio\n");
    else if(b<c && b<a)printf("Bruno\n");
    else if(c<a && c<b)printf("Ian\n");
    else if((a==b && a<c)||(b==c && b<a)||(c==a && c<b)||(a==b && b==c))
    {
        printf("Empate\n");
    }

    return 0;
}
