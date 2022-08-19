/* 1457 - Oracle of Alexandria */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int long long ren(int n,int k)
{
    long long total = n;
    int i=1;

    while(n-(k*i)>=1)
    {
        total*=(n-(i*k));
        i++;
    }
    return total;
}

int main()
{
    long long sum;
    int n,x,test,size;
    char ab[21];
    scanf("%d",&test);
    for(int j=0;j<test;j++)
    {
        scanf("%i",&x);
        scanf("%s",&ab);
        size = strlen(ab);
        sum = ren(x, size);
        printf("%lld\n",sum);
    }
    return 0;
}
