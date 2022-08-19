/* 1161 - Factorial Sum */

#include<stdio.h>


int main()
{
    long long a,b;
    long long fat[21];
    fat[0]=1;
    for(int i = 1; i <= 20; i++){
    fat[i] = fat[i-1]*i;
    }
    while(scanf("%lld %lld",&a,&b)!=EOF){
    printf("%lld\n",fat[a]+fat[b]);
    }
    return 0;
}
