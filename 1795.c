/* 1795 - Trinomial Triangle */
#include<stdio.h>
#include<math.h>

int main()
{
    long long  a,ans;
    while(scanf("%lld",&a)!=EOF)
    {
        ans = pow(3,a);
        printf("%lld\n",ans);
    }
    return 0;
}
