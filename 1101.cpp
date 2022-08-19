/* 1101 - Sequence of Numbers and Sum */

#include<stdio.h>
int main()
{
    int a,b,i,j,t,sum=0,temp;
    for(j=0; j<100; j++)
    {
        scanf("%d %d",&a,&b);
        if(a<=0 || b<=0)
            break;
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        for(i=a; i<=b; i++)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        printf("Sum=%d\n",sum);
        sum=0;
    }
    return 0;
}

