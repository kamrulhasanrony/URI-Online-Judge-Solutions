/* 1030 - Flavious Josephus Legend */

#include<stdio.h>

int fun(int x, int y);

int main()
{
    int x,y,test,ans,i;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d %d",&x,&y);
        ans=fun(x,y);
        printf("Case %d: %d\n",i,ans);
    }


    return 0;
}

int fun(int x, int y)
{
    if(x==1)
        return 1;
    else
        return(fun(x-1,y)+y-1)%x+1;
}
