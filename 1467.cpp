/* 1467 - Zero or One */

#include<stdio.h>

int main()
{
    int a,b,c;
    while(scanf("%d",&a)!=EOF){
    scanf("%d %d",&b,&c);
    if(a==b && b==c && c==a)printf("*\n");
    else if(a!=b && a!=c)printf("A\n");
    else if(b!=c && b!=a)printf("B\n");
    else if(c!=a && c!=b)printf("C\n");
    }
    return 0;
}
