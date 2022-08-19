/* 1534 - Array 123 */

#include<stdio.h>
int main()
{
    int i,j,k,n,ar[72][72];;
    while(scanf("%d",&n)!=EOF)
    {
        k=n-1;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i==j)
                {
                    ar[i][j]=1;
                }
                else
                    ar[i][j]=3;
                if(j==k)ar[i][j]=2;
            }
            k--;
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                printf("%d",ar[i][j]);
            }
            printf("\n");
        }

    }


    return 0;
}
