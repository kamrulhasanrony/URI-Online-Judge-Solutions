/* 1020 - Age in Days */

#include<stdio.h>
int main()
{
    int day,y,m,d;
    scanf("%d",&day);

    y=day/365;
    m=(day%365)/30;
    d=(day%365)%30;

    printf("%d ano(s)\n", y);
    printf("%d mes(es)\n", m);
    printf("%d dia(s)\n", d);
    return 0;
}
