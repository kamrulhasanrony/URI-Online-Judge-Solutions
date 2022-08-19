/* 1103 - Alarm Clock */

#include<stdio.h>

int main()
{
    int a,b,c,d,first=0,last=0;
    while(1)
    {
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if(a==0 && b==0 && c==0 && d==0)break;

        if(a==0)first=24*60+b;
        else
            first=a*60+b;
        if(c==0)last=24*60+d;
        else
            last=c*60+d;

        if(last>first)
            printf("%d\n",last-first);
        else

            printf("%d\n",24*60-(first-last));
        first=0;
        last=0;
    }
    return 0;
}
