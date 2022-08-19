/* 2029 - Honey Reservoir */

#include<stdio.h>
#define PI 3.14

int main()
{
    double v,r,h,ar,a;
    while(scanf("%lf %lf",&v,&r)!=EOF){
        r=r/2;
        a= PI*r*r;
        h=v/a;
        printf("ALTURA = %.2lf\n",h);
        printf("AREA = %.2lf\n",a);
    }
    return 0;
}
