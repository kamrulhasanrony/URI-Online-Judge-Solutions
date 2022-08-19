/* 1047 - Game Time with Minutes */

#include<stdio.h>
int main()
{
    int h1,m1,h2,m2,dif;
    scanf("%d %d %d %d", &h1,&m1,&h2,&m2);
    dif=(h2*60+m2)-(h1*60+m1);

    if(dif<=0)

    dif=dif+24*60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60,dif%60);

    return 0;
}
