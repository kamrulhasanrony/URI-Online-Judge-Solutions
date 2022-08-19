/* 1958 - Scientific Notation */

#include<stdio.h>
int main()
{
    long double a;
    char s[200];
    while(scanf("%LE",&a)!=EOF){
    sprintf(s,"%LE",a);
    if(s[0]!='-')printf("+");
    printf("%.4LE\n",a);
    }
    return 0;
}
