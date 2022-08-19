/* 1142 - PUM */

#include<stdio.h>
int main()
{
    int a,i,b=1,c=2,d=3;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        printf("%d %d %d PUM\n",b,c,d);
        b=b+4;
        c=c+4;
        d=d+4;
    }
    return 0;
}
