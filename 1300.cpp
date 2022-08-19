/* 1300 - Hours and Minutes */

#include<stdio.h>

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF){
    if(n%6==0)printf("Y\n");
    else
        printf("N\n");
    }
    return 0;
}
