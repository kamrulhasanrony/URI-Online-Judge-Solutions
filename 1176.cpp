/* 1176 - Fibonacci Array */

#include<stdio.h>
int main()
{
    long long int ar[61];
    int test,j,i,want;
    ar[0]=0;
    ar[1]=1;
    for(i=2; i<61; i++)
    {
        ar[i]=ar[i-1]+ar[i-2];
    }
    scanf("%d",&test);
    for(j=0; j<test; j++)
    {
        scanf("%d",&want);
        printf("Fib(%d) = %lld\n",want,ar[want]);
    }
    return 0;
}
