/* 1117 - Score Validation */

#include<stdio.h>
int main()
{
    int a,b,j=0;
    double n,avg,ar[2];
    while(1)
    {
        scanf("%lf",&n);
        if(n>=0 && n<=10)
        {
            ar[j]=n;
            j++;
        }
        else
            printf("nota invalida\n");
        if(j>1)
            break;
    }
    avg=(ar[0]+ar[1])/2.0;
    printf("media = %.2lf\n",avg);
    return 0;
}
