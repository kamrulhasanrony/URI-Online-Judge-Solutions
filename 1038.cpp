/* 1038 - Snack */

#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    switch(x)

    {
    case 1:
        printf("Total: R$ %.2lf\n",y*4.0);
        break;

    case 2:
        printf("Total: R$ %.2lf\n",y*4.5);
        break;

    case 3:
        printf("Total: R$ %.2lf\n",y*5.0);
        break;

    case 4:
        printf("Total: R$ %.2lf\n",y*2.0);
        break;

    case 5:
        printf("Total: R$ %.2lf\n",y*1.5);
        break;

    }
    return 0;
}
