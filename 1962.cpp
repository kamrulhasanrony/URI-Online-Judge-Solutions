/* 1962 - A Long, Long Time Ago */


#include<stdio.h>
int main()
{

    long long int n,a,i;
    scanf("%lld",&a);
    for(i=0; i<a; i++)
    {
        scanf("%lld",&n);
        if(n<2015)printf("%lld D.C.\n",2015-n);
        else if(n>2015)
            printf("%lld A.C.\n",n-2014);
        else
            printf("1 A.C.\n");
    }
    return 0;
}
