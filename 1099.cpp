/* 1099 - Sum of Consecutive Odd Numbers II */

#include<stdio.h>
int main()
{
    int a,b,n,sum=0,i,j,temp;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }
        if(a%2==0)a--;
        a=a+2;
        for(j=a; j<b; j+=2)
        {
            sum=sum+j;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
