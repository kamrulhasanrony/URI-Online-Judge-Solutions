/* 2176 - Parity */

#include<stdio.h>
#include<string.h>
int main()
{
    char ab[101];
    int cnt=0,i,d;
    scanf("%s",ab);
    d=strlen(ab);
    for(i=0; i<d; i++)
    {
        if(ab[i]=='1')
            cnt++;
    }
    if(cnt%2==0)
        ab[i]='0';
    else
        ab[i]='1';
    ab[i+1]='\0';
    printf("%s\n",ab);

    return 0;
}
