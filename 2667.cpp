/* 2667 - Jogo de Boca */

#include <bits/stdc++.h>

int main()
{
    int s = 0,i;
    char ab[1000];
    scanf("%s",&ab);
    int len = strlen(ab);
    for ( i = 0; i < len; i++)
    {
        s += ab[i] - '0';
    }
    printf("%d\n",s%3);
}
