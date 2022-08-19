/* 2581 - I am Toorg! */

#include<stdio.h>
#include<string.h>

int main()
{
    int test,i;
    char input[1000];

    scanf("%d",&test);

   for(i=0;i<test;i++)
    {
        scanf("%[^\n]s",&input);
        printf("I am Toorg!\n");

    }
    return 0;
}
