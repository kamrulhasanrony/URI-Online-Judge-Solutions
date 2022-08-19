/* 2159 - Approximate Number of Primes */

#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    double a,b;
    while(scanf("%d",&n)!=EOF){
    a=n/log(n);
    b=1.25506*n/log(n);
    printf("%.1lf %.1lf\n",a,b);
    }
    return 0;
}
