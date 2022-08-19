/* 2862 - Insect! */

#include<stdio.h>

int main()
{
    long long int test,n,i;
    scanf("%lld",&test);
    for(i=0; i<test; i++)
    {
        scanf("%lld",&n);
        if(n>8000)printf("Mais de 8000!\n");
        else
            printf("Inseto!\n");
    }

    return 0;
}
