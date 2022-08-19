/* 2147 - Galopeira */

#include<stdio.h>
#include<string.h>
int main()
{
    int test;
    double len;
    char ch[10000];
    scanf("%d",&test);
    while(test--){
        scanf("%s",&ch);
        len=strlen(ch);
        printf("%.2lf\n",len/100);
    }


    return 0;
}
