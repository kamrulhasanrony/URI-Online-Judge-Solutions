/* 1198 - Hashmat the Brave Warrior */

#include<stdio.h>

int main()
{
    unsigned long long a,b,c;
    while(scanf("%llu %llu",&a,&b)!=EOF)
    {
        if(a<b)
        {
            c=a;
            a=b;
            b=c;
        }
        printf("%llu\n",a-b);
    }
    return 0;
}
