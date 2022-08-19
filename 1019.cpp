/* 1019 - Time Conversion */

#include<stdio.h>
int main()
{
    int sec,h,m,s;
    scanf("%d", &sec);

    h=sec/3600;
    m=(sec/60)%60;
    s=(sec%60);

    printf("%d:%d:%d\n",h,m,s);
    return 0;
}
