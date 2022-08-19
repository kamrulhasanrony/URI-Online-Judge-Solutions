/* 1379 - Mean Median Problem */

#include<stdio.h>
int main()
{
    long int a,b;
    while(scanf("%ld %ld",&a,&b)!=EOF){
    if(a==0 && b==0)break;
    printf("%ld\n",2*a-b);
    }
    return 0;
}
