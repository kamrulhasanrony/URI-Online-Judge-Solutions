/* 1165 - Prime Number */

#include<stdio.h>
int main()
{
    int n,i,count=0,test,j;
    scanf("%d",&test);
    for(j=0;j<test;j++)
    {
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
            break;
        }
    }
    if(count==0)
        printf("%d eh primo\n",n);
    else
        printf("%d nao eh primo\n",n);
        count=0;
    }
    return 0;
}
