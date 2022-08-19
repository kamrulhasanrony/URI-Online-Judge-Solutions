/* 1292 - Trouble with a Pentagon */

#include<stdio.h>
#include<math.h>

const double pi = atan(1.0)*4;

int main()
{
    double n,ans;
    ans = sin((108*pi)/180) / sin((63*pi)/180);
    while(scanf("%lf",&n)!=EOF)
    {
        printf("%.10lf\n",ans*n);
    }


    return 0;
}
