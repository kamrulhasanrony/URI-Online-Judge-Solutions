/* 2163 - The Force Awakens */

#include<stdio.h>

int main()
{
    int row,col,i,j,p=0,q=0;
    scanf("%d %d",&row,&col);
    int arr[row][col];

    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d",&arr[i][j]);

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(arr[i][j]==42)
            {
                if(arr[i-1][j-1]==7 && arr[i][j-1]==7 && arr[i+1][j-1]==7 && arr[i-1][j]==7 && arr[i+1][j]==7 && arr[i-1][j+1]==7 && arr[i][j+1]==7 && arr[i+1][j+1]==7)
                {
                    p=i+1;
                    q=j+1;
                }
            }
        }

    }
    printf("%d %d\n",p,q);

    return 0;
}
