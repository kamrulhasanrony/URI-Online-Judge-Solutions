/* 2172 - Event */

#include<stdio.h>
int main()
{
    unsigned long long int n,m;
    while(scanf("%lld %lld",&n,&m)!=EOF){
        if(n==0 && m==0)break;
        else
            printf("%d\n",n*m);
    }
    return 0;
}
