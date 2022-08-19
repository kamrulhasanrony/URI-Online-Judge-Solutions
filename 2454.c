/* 2454 - Flíper */

#include<stdio.h>

int main()
{
    int p,q;
    scanf("%d %d",&p,&q);
    if(p==0)
    {
        printf("C\n");
    }
    else if(p==1)
    {
        if(q==0)printf("B\n");
        else if(q==1)printf("A\n");
    }
    return 0;
}
