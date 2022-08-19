/* 1114 - Fixed Password */

#include<stdio.h>
int main()
{
    int i,a,b=2002;
    for(i=0; i<100; i++)
    {
        scanf("%d",&a);
        if(a!=b)
            printf("Senha Invalida\n");
        else if(a==b)
        {
            printf("Acesso Permitido\n");
            break;
        }
    }
    return 0;
}
