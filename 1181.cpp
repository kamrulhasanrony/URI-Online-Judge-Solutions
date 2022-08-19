/* 1181 - Line in Array */

#include<stdio.h>
int main()
{
    double N[12][12],sum=0.0;
    int i,j,m;
    char A[2];
    scanf("%d %s",&m,&A);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&N[i][j]);
        }
    }

    for(i=0; i<12; i++)
        sum=sum+N[m][i];

    if(A[0]=='S')
        printf("%.1lf\n",sum);
    else if(A[0]=='M')
        printf("%.1lf\n",sum/12.0);


    return 0;
}

