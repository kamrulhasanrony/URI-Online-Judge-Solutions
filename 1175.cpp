/* 1175 - Array change I */

#include<stdio.h>
int main()
{
    int ar[20],i;
    for(i=19; i>=0; i--)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0; i<20; i++)
    {
        printf("N[%d] = %d\n",i,ar[i]);
    }
    return 0;
}
