/* 1160 - Population Increase */

#include<stdio.h>
int main()
{
    int i,test,p1,p2,j=0;
    double g1,g2;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        j=0;
        scanf("%d%d%lf%lf",&p1,&p2,&g1,&g2);
        while(p1<=p2)
        {
            p1=p1+(p1*g1)/100;
            p2=p2+(p2*g2)/100;
            j++;
            if(j>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if(j<=100)
            printf("%d anos.\n",j);
    }
    return 0;
}

