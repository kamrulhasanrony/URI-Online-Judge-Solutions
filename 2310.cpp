/* 2310 - Volleyball */

#include<stdio.h>
#include<string.h>

int main()
{

    int i,j,test,service[10],block[10],attack[10],service2[10],block2[10],attack2[10];
    double fina=0,fina2=0,fins=0,fins2=0,finb=0,finb2=0;
    char name[10];
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%s",&name);
        scanf("%d %d %d",&service[i],&block[i],&attack[i]);
        scanf("%d %d %d",&service2[i],&block2[i],&attack2[i]);
        fins=fins+service[i];
        finb=finb+block[i];
        fina=fina+attack[i];
        fins2=fins2+service2[i];
        finb2=finb2+block2[i];
        fina2=fina2+attack2[i];

    }
    printf("Pontos de Saque: %.2lf %%.\n",(fins2/fins)*100);
    printf("Pontos de Bloqueio: %.2lf %%.\n",(finb2/finb)*100);
    printf("Pontos de Ataque: %.2lf %%.\n",(fina2/fina)*100);
    return 0;
}
