/* 1079 - Weighted Averages */

#include<stdio.h>
int main()
{
    int t,i;
    double a,b,c,avg,sum;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%lf%lf%lf",&a,&b,&c);
        sum=(2*a+3*b+5*c);
        avg=sum/10.0;
        printf("%.1lf\n",avg);
    }
    return 0;
}
