/* 2670 - Máquina de Café */

#include <stdio.h>
int main()
{
    int a,b,c,total;
    scanf("%i %i %i",&a,&b,&c);
    if((2*b+4*c)<(2*a+2*c) && (2*b+4*c)<(4*a+2*b))
    {
        total=(2*b)+(4*c);
    }
    else if ((2*a+2*c)<(4*a+2*b) && (2*a+2*c)<(4*c+2*b))
    {
        total=(2*a)+(2*c);
    }
    else if((2*b+4*a)<(2*a+2*c) && (2*b+4*a)<(4*c+2*b))
    {
        total=(4*a)+(2*b);
    }
    else
    {
        total=(2*a)+(2*c);
    }
    printf("%i\n",total);
    return 0;
}
