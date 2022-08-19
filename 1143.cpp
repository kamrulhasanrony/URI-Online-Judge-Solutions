/* 1143 - Squared and Cubic */

#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        printf("%d %d %d\n",i,i*i,i*i*i);
    }
    return 0;
}
