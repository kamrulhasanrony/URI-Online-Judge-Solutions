/* 2160 - Name at Form */
#include<stdio.h>
#include<string.h>

int main()
{
    char ch[501];
    int len;
    gets(ch);
    len = strlen(ch);
    if(len<=80)printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
