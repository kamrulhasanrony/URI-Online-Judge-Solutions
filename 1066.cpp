/* 1066 - Even, Odd, Positive and Negative */

#include<stdio.h>
int main()
{
    int array[5];
    int i,sum=0,odd=0,pos=0,neg=0;

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
    for(i=0; i<5; i++)
    {
        if((array[i])%2!=0)
        {
            odd=odd+1;
        }
    }
    for(i=0; i<5; i++)
    {
        if((array[i])>0)
        {
            pos=pos+1;
        }
    }
    for(i=0; i<5; i++)
    {
        if((array[i])<0)
        {
            neg=neg+1;
        }
    }
    printf("%d valor(es) par(es)\n",sum);
    printf("%d valor(es) impar(es)\n",odd);
    printf("%d valor(es) positivo(s)\n",pos);
    printf("%d valor(es) negativo(s)\n",neg);
    return 0;
}


