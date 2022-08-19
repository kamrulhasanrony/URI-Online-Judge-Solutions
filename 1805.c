/*1805 - Natural Sum */
#include<stdio.h>

int main()
{
    long long start,end,ans=0,i;
    scanf("%lld %lld",&start,&end);
    for(i=start; i<=end; i++)
    {
        ans = ans + i;
    }
    printf("%lld\n",ans);
    return 0;
}
