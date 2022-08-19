/* 1393 - Hexagonal Tiles */
#include<stdio.h>

#define  ll long long


int main()
{
    ll n;
    while(scanf("%lld",&n)!=EOF)
    {
        if(n==0)break;
        ll _0=0,_1=1;
        ll ans=0;
        for(ll i=1; i<=n; i++)
        {
            ans=_0+_1;
            _0=_1;
            _1=ans;
        }
        printf("%d\n",ans);
    }
    return 0;
}
