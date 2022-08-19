/* 1129 - Optical Reader */

#include<stdio.h>

int main()
{
    int a,b,c,d,e,i,test,j,k,fin=0,cnt=0;
    while(scanf("%d",&test)!=EOF)
    {
        if(test==0)break;
        for(i=0; i<test; i++)
        {
            scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
            if(a<=127 && b>127 && c>127 && d>127 && e>127)printf("A\n");
            else if(b<=127 && a>127 && c>127 && d>127 && e>127)printf("B\n");
            else if(c<=127 && a>127 && b>127 && d>127 && e>127)printf("C\n");
            else if(d<=127 && a>127 && c>127 && b>127 && e>127)printf("D\n");
            else if(e<=127 && a>127 && c>127 && d>127 && b>127)printf("E\n");
            else
                printf("*\n");
        }
    }
    return 0;
}
