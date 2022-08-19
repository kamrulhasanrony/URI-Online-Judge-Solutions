/* 1397 - Game of The Greatest */

#include<stdio.h>

int main()
{
    int a,b,test,first=0,second=0,i;
    while(scanf("%d",&test)!=EOF)
    {
        if(test==0)break;
        for(i=0; i<test; i++)
        {
            scanf("%d %d",&a,&b);
            if(a>b)first++;
            else if(b>a)second++;
        }
        printf("%d %d\n",first,second);
        first=0,second=0;
    }
    return 0;
}
