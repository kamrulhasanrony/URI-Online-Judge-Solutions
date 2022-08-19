/* 1064 - Positives and Average */

#include<stdio.h>
int main()
{
    double array[6],total=0,avg;
    int i,sum=0;

    for(i=0; i<6; i++)
    {
        scanf("%lf",&array[i]);
    }
    for(i=0; i<6; i++)
    {
        if(array[i]>0)
        {
            sum=sum+1;
        }
    }
    for(i=0; i<6; i++)
    {
        if(array[i]>0)
        {
            total = total+array[i];
        }
    }
    avg=total/(sum);
    printf("%d valores positivos\n",sum);
    printf("%.1lf\n",avg);
    return 0;
}


