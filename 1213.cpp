/* 1213 - Ones */

#include<stdio.h>

int main()
{
    long long int a,l,c;
    while(scanf("%lli",&a)==1)
    {
        l=1,c=1;
        while(l%a!=0)
        {
            l=(10*l+1)%a;
            c++;
        }
        printf("%lli\n",c);
    }

    return 0;
}
