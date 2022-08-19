/* 1118 - Several Scores with Validation */

#include<stdio.h>
int main()
{
    int a,j=0;
    double n,avg,ar[2];
    while(1)
    {
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
        j=0;
        while(1)
        {
            scanf("%d",&a);
            printf("novo calculo (1-sim 2-nao)\n");
            if(a==1 || a==2)
                break;
        }
        if(a==1)
            continue;
        else
            break;
    }
    return 0;
}
