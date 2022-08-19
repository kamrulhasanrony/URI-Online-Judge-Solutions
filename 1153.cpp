/* 1153 - Simple Factorial */

#include<stdio.h>
int main()
{
    unsigned long long int sum=1;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=i*sum;
    }
    printf("%llu\n",sum);
    return 0;
}
