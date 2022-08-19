/* 2770 - Board Size */

#include<stdio.h>
int main()
{
    int x,y,m,a,b,i;
    while(scanf("%d %d %d",&x,&y,&m)!=EOF)
    {
        for(i=0; i<m; i++)
        {
            scanf("%d %d",&a,&b);
            int cnt=0;
            if(a<=x && b<=y)cnt++;
            if(a<=y && b<=x)cnt++;
            if(cnt!=0)printf("Sim\n");
            else
                printf("Nao\n");
        }
    }


    return 0;
}
