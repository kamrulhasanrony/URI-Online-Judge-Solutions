/* 1963 - The Motion Picture */

#include<stdio.h>
int main()
{
    double a,b,c,d;
    while(scanf("%lf %lf",&a,&b)!=EOF)
    {
        c=b-a;
        d=(c/a)*100;
        printf("%.2lf%%\n",d);
    }
    return 0;
}
