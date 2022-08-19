/* 1060 - Positive Numbers */

#include<stdio.h>
int main()
{
    double array[6];
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
    printf("%d valores positivos\n",sum);

    return 0;
}


