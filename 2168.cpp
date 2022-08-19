/* 2168 - Twilight at Portland */

#include<stdio.h>

int main()
{
    int n,cnt=0,a,i,j;
    scanf("%d",&n);
    a=n+1;
    int ar[a][a];
    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0; i<a-1; i++)
    {
        for(j=0; j<a-1; j++)
        {
            if((ar[i][j]+ar[i+1][j]+ar[i][j+1]+ar[i+1][j+1])>=2)
            {
                printf("S");
            }
            else
            {
                printf("U");
            }
        }
        printf("\n");
    }
    return 0;
}
