/* 2808 - Knights Again */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

int main()
{
    char x[3], y[3];
    int a, b, fin;
    while(scanf("%s %s", x, y)!=EOF)
    {

        a = x[0] - y[0];
        b = x[1] - y[1];

        fin=abs(a*a)+abs(b*b);
        if(fin==5)printf("VALIDO\n");
        else
            printf("INVALIDO\n");
        fin=0;
    }
    return 0;
}
