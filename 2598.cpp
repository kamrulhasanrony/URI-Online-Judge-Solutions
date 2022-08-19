/* 2598 - Placing Radars */

#include<stdio.h>

int main()
{
    int a,b,test;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&a,&b);
        if(b>a)printf("1\n");
        else if(a%b==0)printf("%d\n",a/b);
        else
            printf("%d\n",a/b+1);
    }
    return 0;
}
