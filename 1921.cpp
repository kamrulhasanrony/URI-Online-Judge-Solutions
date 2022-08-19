/* 1921 - Guilherme and His Kites */

#include<stdio.h>
int main()
{
    long long int a,i,n=0;
    scanf("%lld",&a);
    if(a>=3)
    {
        for(i=1; i<=a; i++)
        {
            n=n+i;
        }
        printf("%lld\n",n-2*a);
    }
    return 0;
}
