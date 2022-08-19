/* 1065 - Even Between five Numbers */

#include<stdio.h>
int main()
{
    int array[5],i,sum=0;


    for(i=0; i<5; i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0; i<5; i++)
    {
        if((array[i])%2==0)
        {
            sum=sum+1;
        }
    }
    printf("%d valores pares\n",sum);
    return 0;
}


