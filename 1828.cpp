/* 1828 - Bazinga! */

#include<stdio.h>
#include<string.h>

int main()
{
    int test,b,c,i;
    scanf("%d",&test);
    char aa[]="tesoura", bb[]="papel", cc[]="pedra", dd[]="lagarto", ee[]="Spock";
    char s1[15],s2[15];
    for(i=1; i<=test; i++)
    {
        scanf("%s %s",&s1,&s2);
        if(strcmp(s1,s2)==0)printf("Caso #%d: De novo!\n",i);

        else if(strcmp(s1,aa)==0)
        {
            if((0==strcmp(s2,bb)) || (0==strcmp(s2,dd)))
                printf("Caso #%d: Bazinga!\n", i);
            else if((0==strcmp(s2,cc)) || (0==strcmp(s2,ee)))
                printf("Caso #%d: Raj trapaceou!\n", i);
        }

        else if(0==strcmp(s1,bb))
        {
            if((0==strcmp(s2,cc)) || (0==strcmp(s2,ee)))
                printf("Caso #%d: Bazinga!\n", i);
            else if((0==strcmp(s2,aa)) || (0==strcmp(s2,dd)))
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if(0==strcmp(s1,cc))
        {
            if((0==strcmp(s2,aa)) || (0==strcmp(s2,dd)))
                printf("Caso #%d: Bazinga!\n", i);
            else if((0==strcmp(s2,bb)) || (0==strcmp(s2,ee)))
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if(0==strcmp(s1,dd))
        {
            if((0==strcmp(s2,bb)) || (0==strcmp(s2,ee)))
                printf("Caso #%d: Bazinga!\n", i);
            else if((0==strcmp(s2,cc)) || (0==strcmp(s2,aa)))
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
        else if(0==strcmp(s1,ee))
        {
            if((0==strcmp(s2,aa)) || (0==strcmp(s2,cc)))
                printf("Caso #%d: Bazinga!\n", i);
            else if((0==strcmp(s2,bb)) || (0==strcmp(s2,dd)))
                printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }
    return 0;
}
