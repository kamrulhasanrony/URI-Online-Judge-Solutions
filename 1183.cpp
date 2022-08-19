/* 1183 - Above the Main Diagonal */

#include<stdio.h>
int main()
{
    double N[12][12],uppersum=0.0;
    int i,j;
    char A[2];
    scanf("%s",&A);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&N[i][j]);
        }
    }

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            if(i<j)
            {
                uppersum=uppersum+N[i][j];
            }
        }
    }

    if(A[0]=='S')
        printf("%.1lf\n",uppersum);
    else if(A[0]=='M')
        printf("%.1lf\n",uppersum/66.0);
    return 0;
}

