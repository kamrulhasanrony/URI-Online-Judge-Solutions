/* 1708 - Lap */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double a,b,c,d;
    while(scanf("%lf %lf",&a,&b)!=EOF)
    {
        c=abs(a-b);
        d=ceil(b/c);
        printf("%.0lf\n",d);
        c=0;
    }
    return 0;
}
