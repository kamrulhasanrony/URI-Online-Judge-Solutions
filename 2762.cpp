/* 2762 - Input and Output 6 */

#include<stdio.h>
int main()
{
    long long int a,b;
    while(scanf("%lld.%lld",&a,&b)!=EOF){
    printf("%lld.%lld\n",b,a);
    }
    return 0;
}
