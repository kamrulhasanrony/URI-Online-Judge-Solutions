/* 1715 - Handball */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int ar[101][101],i,j,n,m,cnt=0,final=0;
    scanf("%d %d",&n,&m);
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(ar[i][j]>0)
            {
                cnt++;
            }
        }
        if(cnt==m)
        {
            final++;

        }
        cnt=0;
    }
    printf("%d\n",final);
    return 0;
}
