/* 2031 - Rock, Paper, Airstrike */

#include<stdio.h>
#include<string.h>

int main()
{
    int c;
    char a[100],b[100];
    scanf("%d",&c);
    while(c--)
    {
        scanf("%s",&a);
        scanf("%s",&b);
        if(a[1]=='e' && b[1]=='e')
            printf("Sem ganhador\n");
        else if(a[1]=='t' && b[1]=='t')
            printf("Aniquilacao mutua\n");
        else if(a[1]=='a' && b[1]=='a')
            printf("Ambos venceram\n");
        else if(a[1]=='t' || (a[1]=='e' && b[1]=='a'))
            printf("Jogador 1 venceu\n");
        else
            printf("Jogador 2 venceu\n");
    }
    return 0;
}
