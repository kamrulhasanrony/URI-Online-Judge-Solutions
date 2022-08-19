/* 2510 - Batmain */

#include<stdio.h>
#include<string.h>

int main()
{
    int test,i,len;
    char ab[100];
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%s",&ab);

        len=strlen(ab);

        if(len>=0 || len<=25)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
