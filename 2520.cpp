/* 2520 - The Last Analógimôn */

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ar[101][101],i,j,row,col,a,b,c,d,fin=0;
    while(scanf("%d %d",&row,&col)!=EOF)
    {
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                scanf("%d",&ar[i][j]);
                if(ar[i][j]==1)a=i,b=j;
                if(ar[i][j]==2)c=i,d=j;
            }
        }
        fin = abs(d-b) + abs(c-a);
        printf("%d\n",fin);
    }
    return 0;
}
