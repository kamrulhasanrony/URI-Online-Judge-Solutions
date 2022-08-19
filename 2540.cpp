/* 2540 - Leader's Impeachment */

#include<stdio.h>

int main()
{
    int i,n,test;
    float fin =.666666,cnt=0,d;
    while(scanf("%d",&test)!=EOF)
    {
        for(i=0; i<test; i++)
        {
            scanf("%d",&n);
            if(n==1)cnt++;
        }
        d=fin*test;
        if(cnt>d)
            printf("impeachment\n");
        else if(cnt<d)
            printf("acusacao arquivada\n");
        cnt=0;
    }
    return 0;
}
