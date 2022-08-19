/* 1189 - Left Area */

#include<stdio.h>

int main()
{
    double ar[12][12],sum=0.0;
    int l=1,n=11,i,j;
    char O[2];
    scanf("%s",&O);

    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%lf",&ar[i][j]);
        }
    }
    for(i=0; i<5; i++)
    {
        for(j=l; j<n; j++)
        {
            sum=sum+ar[j][i];
        }
        n--;
        l++;
    }

    if(O[0]=='S')
        printf("%.1lf\n",sum);
    else
        printf("%.1lf\n",sum/30.0);
    return 0;
}
