/* 1040 - Average 3 */

#include<stdio.h>
int main()
{
    double a,b,c,d,e,avg1;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    avg1=(a*2+b*3+c*4+d)/10;
    printf("Media: %.1f\n",avg1);

    if(avg1>=7)
    {
        printf("Aluno aprovado.\n");
    }
    else if(avg1>=5)
    {
        printf("Aluno em exame.\n");
        scanf("%lf", &e);
        printf("Nota do exame: %.1lf\n",e);

        if(((avg1+e)/2.0)>=5.0)
        {
            printf("Aluno aprovado.\n");
        }
        else
        {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1f\n",(avg1+e)/2.0);
    }

    else
        printf("Aluno reprovado.\n");

    return 0;
}
