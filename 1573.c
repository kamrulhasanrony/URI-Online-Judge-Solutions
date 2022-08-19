/* 1573 - Chocolate Factory */

#include<stdio.h>

int main()
{
    int a,b,c,ans,fin;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
        if(a==0 && b==0 && c==0)break;
        else
        {
            ans = a*b*c;
            fin = (int)cbrt(ans);
            printf("%d\n",fin);
        }
    return 0;
}
