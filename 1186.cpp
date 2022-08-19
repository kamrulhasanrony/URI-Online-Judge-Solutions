/* 1186 - Below the Secundary Diagonal */

#include<stdio.h>
int main()
{
    double N[12][12],sum=0.0;
    char O[2];
    scanf("%s",&O);
    int n=10,i,j;
    for(i = 0;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&N[i][j]);
        }
    }
    for(i = 1;i < 12;i++){

        for(j = 11;j > n;j--){
            sum += N[i][j];
        }
        n--;
    }
    if (O[0]=='S')printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/66.0);
    return 0;
}
