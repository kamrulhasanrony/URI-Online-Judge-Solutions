/* 2140 - Two Bills */

#include<stdio.h>

int main()
{
    int a,b,t,c,i;
    int d[15]= {7,12,22,52,102,15,25,55,105,30,60,110,70,120,150};
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==0 && b==0)break;
        c=(b-a);
        for(i=0,t=0; i<15; i++)
        {
            if(d[i]==c)
            {
                t=1;
                break;
            }
        }
        if(t)printf("possible\n");
        else
            printf("impossible\n");
    }
    return 0;
}
