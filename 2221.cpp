/* 2221 - Pomekons Battle */

#include<stdio.h>

int main()
{
    double bonus,attack1,defence1,attack2,defence2,final1=0,final2=0;
    int level1,level2,test,i;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%lf",&bonus);
        scanf("%lf %lf %d",&attack1,&defence1,&level1);
        scanf("%lf %lf %d",&attack2,&defence2,&level2);
        if(level1%2==0)
        {
            final1=(((attack1+defence1)/2)+bonus);
        }
        else
            final1=((attack1+defence1)/2);

        if(level2%2==0)
        {
            final2=(((attack2+defence2)/2)+bonus);
        }
        else
            final2=((attack2+defence2)/2);

        if(final1>final2)
            printf("Dabriel\n");
        else if(final1<final2)
            printf("Guarte\n");
        else
            printf("Empate\n");

    }
    return 0;
}
