/* 1048 - Salary Increase */

#include<stdio.h>
int main()
{
    double a,b,c,d,e,f;
    scanf("%lf", &a);

    if(a>=0 && a<=400.00)
    {
        b=a+15*a/100;
        printf("Novo salario: %.2lf\n", b);
        printf("Reajuste ganho: %.2lf\n", b-a);
        printf("Em percentual: 15 %%\n");
    }
    else if(a>=400.01 && a<=800.00)
    {
        c=a+12*a/100;
        printf("Novo salario: %.2lf\n", c);
        printf("Reajuste ganho: %.2lf\n", c-a);
        printf("Em percentual: 12 %%\n");
    }

    else if(a>=800.01 && a<=1200.00)
    {
        d=a+10*a/100;
        printf("Novo salario: %.2lf\n", d);
        printf("Reajuste ganho: %.2lf\n", d-a);
        printf("Em percentual: 10 %%\n");
    }

    else if(a>=1200.01 && a<=2000.00)
    {
        e=a+7*a/100;
        printf("Novo salario: %.2lf\n", e);
        printf("Reajuste ganho: %.2lf\n", e-a);
        printf("Em percentual: 7 %%\n");
    }
        else if(a>2000.00)
    {
        f=a+4*a/100;
        printf("Novo salario: %.2lf\n", f);
        printf("Reajuste ganho: %.2lf\n", f-a);
        printf("Em percentual: 4 %%\n");
    }
    return 0;
}
