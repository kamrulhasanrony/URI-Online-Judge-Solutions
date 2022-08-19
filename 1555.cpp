/* 1555 - Functions */
#include<stdio.h>
#include<math.h>
int main()
{
    int Beto,Carlos,Rafael;
    int test,x,y;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d %d",&x,&y);
        Beto=2*pow(x,2)+pow(5*y,2);
        Rafael=pow(3*x,2)+pow(y,2);
        Carlos= -(100*x)+pow(y,3);
        if(Beto>Rafael && Beto>Carlos)printf("Beto ganhou\n");
        else if(Rafael>Beto && Rafael>Carlos)printf("Rafael ganhou\n");
        else if(Carlos>Beto && Carlos>Rafael)printf("Carlos ganhou\n");


    }
    return 0;
}
