/* 1238 - Combiner */
#include<stdio.h>
#include<string.h>

int main()
{
    int n,a,b;
    char up[50],left[50];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s %s",&up,&left);
        a=0;
        b=0;

        for(int j=0; j<50; j++)
        {
            if(up[j]=='\0')a++;
            if(left[j]=='\0')b++;
            if(a==1 && b==1)break;
            if(a==0)printf("%c",up[j]);
            if(b==0)printf("%c",left[j]);
        }
        printf("\n");
    }
    return 0;
}
