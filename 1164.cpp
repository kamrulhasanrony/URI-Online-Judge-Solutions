/* 1164 - Perfect Number */

#include<stdio.h>
int main()
{
    int i,j,test,n,sum=0;
    scanf("%d",&test);
    for(j=0; j<test; j++)
    {
        scanf("%d",&n);
        for(i=1; i<n; i++)
        {
            if(n%i==0)
                sum=sum+i;
        }
        if(sum==n)
            printf("%d eh perfeito\n",n);
        else
            printf("%d nao eh perfeito\n",n);
            sum=0;
    }
    return 0;
}
