/* 1146 - Growing Sequences */

#include<stdio.h>
int main()
{
    int a,i,j;
    while(a)
    {
        scanf("%d",&a);
        if(a==0)break;
        printf("1");
        for(j=2; j<=a; j++)
        {
            printf(" %d",j);
        }
        printf("\n");
    }
    return 0;
}
