/* 1865 - Mjölnir */

#include<stdio.h>
#include<string.h>
int main()
{
    char ar[100];
    int test,i,w;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%s %d",&ar,&w);
        if(strcmp(ar,"Thor"))printf("N\n");
        else
            printf("Y\n");
    }
    return 0;
}
