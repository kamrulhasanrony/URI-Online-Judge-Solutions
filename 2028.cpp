/* 2028 - Sequence of Sequence */

#include<stdio.h>

int main()
{
    int n,i,j,count,k,cas=0;
    while(scanf("%d",&n)!=EOF)
    {
        k=1;
        cas++;
        for(i=1; i<=n; i++)
        {
            for(j=i; j>0; j--)
            {
                k++;
            }
        }
        if(n==0)printf("Caso %d: %d numero\n",cas,k);
        else printf("Caso %d: %d numeros\n",cas,k);
        printf("0");
                for(i=1; i<=n; i++)
        {
            for(j=i; j>0; j--)
            {
                printf(" %d",i);
            }
        }
        printf("\n\n");
    }
    return 0;
}
