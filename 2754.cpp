/* 2754 - Output 8 */

#include<stdio.h>

int main()
{
    double a,b;
    a=234.345,b=45.698;
    printf("%lf - %lf\n",a,b);
    printf("%.0lf - %.0lf\n",a,b);
    printf("%.1lf - %.1lf\n",a,b);
    printf("%.2lf - %.2lf\n",a,b);
    printf("%.3lf - %.3lf\n",a,b);
    printf("2.343450e+02 - 4.569800e+01\n",a,b);
    printf("2.343450E+02 - 4.569800E+01\n");
    printf("%.3lf - %.3lf\n",a,b);
    printf("%.3lf - %.3lf\n",a,b);

    return 0;
}
