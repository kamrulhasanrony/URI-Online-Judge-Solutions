/* 1308 - Etruscan Warriors Never Play Chess */

#include<stdio.h>
#include<math.h>
int main()
{
    long long n;
    int test;
    double det,y;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lld",&n);
        det=(1+8*n);
        y=(-1+sqrt(det))/2;
        printf("%lld\n",(long long)y);
    }

    return 0;
}
