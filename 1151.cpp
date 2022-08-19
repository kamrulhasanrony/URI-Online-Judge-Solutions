/* 1151 - Easy Fibonacci */

#include<stdio.h>
int main()
{
    int i,a=0,b=1,n,c,d=0;
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("%d",a);
        d++;
        if(d==n)break;
        else
        printf(" ");
        c=a+b;
        a=b;
        b=c;
    }
    printf("\n");
    return 0;
}
