/* 1414 - World Cup */

#include<stdio.h>

int main()
{
    char ab[1000];
    int match,test,i,cnt,point;
    while(scanf("%d %d",&test,&match)!=0)
    {
        if(test==0 && match==0)break;
        cnt=0;
        for(i=0; i<test; i++)
        {
            scanf("%s %d",&ab,&point);
            cnt=cnt+point;

        }
        printf("%d\n",match*3-cnt);
    }

    return 0;
}
