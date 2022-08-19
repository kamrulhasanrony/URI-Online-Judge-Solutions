/* 1178 - Array Fill III */

#include<stdio.h>
int main()
{
    int ar[100],i;
    double b;
    scanf("%lf",&b);
    for(i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n",i,b);
        b=b/2;
    }
    return 0;
}
