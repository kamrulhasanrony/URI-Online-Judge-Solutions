/* 1026 - To Carry or not to Carry */

#include<stdio.h>

int main()
{
    long long unsigned a,b,c;
    while(scanf("%llu %llu",&a,&b)!=EOF){
            c=a^b;
    printf("%llu\n",c);
    }
    return 0;
}
