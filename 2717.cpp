/* 2717 - Elf Time */

#include<stdio.h>

int main()
{
    int n,a,b;
    while(scanf("%d",&n)!=EOF){
        scanf("%d %d",&a,&b);
        if(n>=(a+b))printf("Farei hoje!\n");
        else
            printf("Deixa para amanha!\n");
    }
    return 0;
}
