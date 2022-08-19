/* 2167 - Engine Failure */

#include<stdio.h>

int main()
{
    int tmp=0,rpm,cnt=0,cntdn=1,test,ans=0;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&rpm);
        cnt++;
        if(rpm<tmp && cntdn==1)
        {
            ans=cnt;
            cntdn=0;

        }
        tmp=rpm;
    }
    printf("%d\n",ans);
    return 0;
}
