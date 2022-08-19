/* 1185 - Above the Secundary Diagonal */

#include<stdio.h>
int main()
{
    double N[12][12],uppersum=0.0;
    int i,j,n=1;
    char A[2];
    scanf("%s",&A);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&N[i][j]);
        }
    }

    for(i=10; i>=0; i--)
    {
        for(j=0; j<n; j++)
        {
            uppersum=uppersum+N[i][j];
        }
        n++;
    }

    if(A[0]=='S')
        printf("%.1lf\n",uppersum);
    else if(A[0]=='M')
        printf("%.1lf\n",uppersum/66.0);
    return 0;
}

