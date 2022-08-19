/* 1149 - Summing Consecutive Integers */

#include<stdio.h>
int main()
{
    int a,i,sum=0,n;
    scanf("%d %d",&a,&n);
    while(n<0 || n==0)
    {
        scanf("%d",&n);
    }
    for(i=0; i<n; i++)
    {
        sum=sum+a+i;
    }
    printf("%d\n",sum);
    return 0;
}
