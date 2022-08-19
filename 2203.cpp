/* 2203 - Crowstorm */

#include<stdio.h>
#include<math.h>

int main()
{
    double x1,y1,x2,y2,v,r1,r2,a,b,range,distance;
    while(scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2)!=EOF)
    {
        scanf("%lf %lf %lf",&v,&r1,&r2);
        a=(x2-x1)*(x2-x1);
        b=(y2-y1)*(y2-y1);
        distance=sqrt(a+b);
        distance +=v*1.50;
        range=r1+r2;
        if(distance>range) printf("N\n");
        else
            printf("Y\n");
        distance=0;
        range=0;
    }
    return 0;
}
