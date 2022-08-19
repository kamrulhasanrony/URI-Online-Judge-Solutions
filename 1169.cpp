/* 1169 - Grains in a Chess Board */

#include<stdio.h>
#include<math.h>
int main()
{
    unsigned long long res,test,n,fin;
    scanf("%llu",&test);

    while(test--)
    {
        scanf("%llu",&n);
        res=pow(2,n)-1;
        fin=res/12000;
        printf("%llu kg\n",fin);

    }
    return 0;
}
