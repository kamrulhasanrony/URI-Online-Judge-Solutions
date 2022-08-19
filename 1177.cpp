/* 1177 - Array Fill II */

#include<stdio.h>
int main()
{
    int ar[1000],i,j=0,test;
    scanf("%d",&test);
    for(i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n",i,j);
        j++;
        if(j==test)j=0;
    }
    return 0;
}
