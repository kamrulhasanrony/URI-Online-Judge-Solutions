/* 1134 - Type of Fuel */

#include<stdio.h>
int main()
{
    int n,al=0,gs=0,de=0;
    printf("MUITO OBRIGADO\n");
    while(1)
    {
        scanf("%d",&n);
        if(n>0 && n<4)
        {
            if(n==1)
                al++;
            else if(n==2)
                gs++;
            else if(n==3)
                de++;
        }
        else if(n==4)
            break;
        else
            continue;
    }
    printf("Alcool: %d\n",al);
    printf("Gasolina: %d\n",gs);
    printf("Diesel: %d\n",de);
    return 0;
}
