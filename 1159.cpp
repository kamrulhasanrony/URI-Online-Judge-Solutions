/* 1159 - Sum of Consecutive Even Numbers */

#include<stdio.h>
int main()
{
    int sum=0,i,n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        else if(n%2==0)
        {
            for(i=n; i<=n+8; i+=2)
            {
                sum=sum+i;
            }
        }
        else if(n%2!=0)
        {
            n++;
            for(i=n; i<=n+8; i+=2)
            {
                sum=sum+i;
            }

        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
