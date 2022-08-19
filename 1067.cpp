/* 1067 - Odd Numbers */

#include<stdio.h>
int main()
{

    int x,a;
    scanf("%d",&x);
    for(a=1; a<=x ; a+=2)
    {
        printf("%d\n",a);
    }
    return 0;
}
