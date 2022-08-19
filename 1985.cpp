/* 1985 - MacPRONALTS */

#include<stdio.h>

int main()
{
    int test,i;
    double item,price,sum=0;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%lf %lf",&item,&price);
        if(item==1001)
        {
            sum=sum+price*1.5;
        }
        else if(item==1002)
        {
            sum=sum+price*2.5;
        }
        else if(item==1003)
        {
            sum=sum+price*3.5;
        }
        else  if(item==1004)
        {
            sum=sum+price*4.5;
        }
        else if(item==1005)
        {
            sum=sum+price*5.5;
        }
    }
    printf("%.2lf\n",sum);

    return 0;
}
