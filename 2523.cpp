/* 2523 - Will's Message */

#include<stdio.h>
#include<string.h>

int main()
{
    char ab[1000];
    int test,i,n;
    while(scanf("%s",&ab)!=EOF)
    {
        scanf("%d",&test);
        for(i=0; i<test; i++)
        {
            scanf("%d",&n);
            printf("%c",ab[n-1]);
        }
        printf("\n");
    }
    return 0;
}
