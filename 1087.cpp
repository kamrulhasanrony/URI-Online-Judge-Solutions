/* 1087 - Queen */

#include<stdio.h>

int main()
{
    long long unsigned int a,b,c,d;
    while(scanf("%llu %llu %llu %llu",&a,&b,&c,&d)!=EOF)
    {
        if(a==0 && b==0 && c==0 && d==0)break;
        else if(a==c && b==d)printf("0\n");
        else if(a==c && b!=d)printf("1\n");
        else if(a!=c && b==d)printf("1\n");
        else if(a+b==c+d)printf("1\n");
        else if(b+c==a+d)printf("1\n");
        else
            printf("2\n");
    }

    return 0;
}
