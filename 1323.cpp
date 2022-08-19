/* 1323 - Feynman */
#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)break;
        printf("%d\n",(n*(n+1)*(2*n+1))/6);
    }
    return 0;
}
