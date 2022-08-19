/* 1150 - Exceeding Z */

#include<stdio.h>
int main()
{
    int a,b,i,sum=0,s=0;
    scanf("%d",&a);
    while(1)
    {
        scanf("%d",&b);
        if(b>a)
            break;
        else
            continue;
    }
    for(i=a; i<b; i++)
    {
        sum=sum+i;
        s=s+1;
        if(sum>b)
            break;
    }
    printf("%d\n",s);
    return 0;
}
