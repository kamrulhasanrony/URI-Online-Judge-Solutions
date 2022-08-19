/* 2057 - Time Zone */

#include<stdio.h>
int main()
{
    int a,b,c,now,then;
    scanf("%d %d %d",&a,&b,&c);
    if(a==0)a=24;
    now=a+b;
    then=now+c;
    if(then>=24)
        printf("%d\n",then-24);
    else
        printf("%d\n",then);
    return 0;
}
