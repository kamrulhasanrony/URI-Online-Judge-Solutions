/* 2164 - Fast Fibonacci */

#include<stdio.h>
#include<math.h>
int main()
{
    double n,x,y,d,fin;
    while(scanf("%lf",&n)!=EOF){
    x=((1+sqrt(5))/2);
    y=((1-sqrt(5))/2);
    d=(pow(x,n)-pow(y,n));
    fin=d/sqrt(5);
    printf("%.1lf\n",fin);
    }
    return 0;
}
