/* 1156 - S Sequence II */

#include<stdio.h>
int main()
{
    int i;
    float sum=0,j=1.0;
    for(i=1; i<=39; i+=2)
    {
        sum=sum+(i/j);
        j=j+j;
    }
    printf("%.2f\n",sum);
    return 0;
}
