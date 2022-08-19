/* 1441 - Hailstone Sequences */
#include<stdio.h>

int main()
{
    int m,h;
    while(scanf("%d",&h)!=EOF)
    {
        if(h==0)break;
        m=h;
        while(h!=1)
        {
            if(h%2==0)
            {
                h=h/2;
            }
            else
            {
                h=h*3;
                h++;
            }
            if(h>m)
            {
                m=h;
            }
        }
        printf("%d\n",m);

    }

    return 0;
}
