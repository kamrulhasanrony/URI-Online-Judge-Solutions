/* 1332 - One-Two-Three */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int test,len;
    char ab[1001];
    scanf("%d",&test);
    while(test--)
    {

        scanf("%s",&ab);
        len = strlen(ab);

        if(len==5)printf("3\n");
        else if((ab[0]=='t' && ab[1]=='w')||(ab[0]=='t'&&ab[2]=='o')||(ab[1]=='w'&&ab[2]=='o'))
        {
            printf("2\n");
        }
        else
            printf("1\n");

    }
    return 0;
}
