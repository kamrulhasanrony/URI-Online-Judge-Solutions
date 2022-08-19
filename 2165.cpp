/* 2165 - Twitting */

#include<stdio.h>
#include<string.h>

int main()
{
    int d;
    char ch[501];
    gets(ch);
    d=strlen(ch);
    if(d<=140)printf("TWEET\n");
    else
        printf("MUTE\n");

    return 0;
}
