/* 1546 - Feedback */

#include<stdio.h>

int main()
{
    int test,cas,i,j,n;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%d",&cas);
        for(j=0; j<cas; j++)
        {
            scanf("%d",&n);
            if(n==1)printf("Rolien\n");
            else if(n==2)printf("Naej\n");
            else if(n==3)printf("Elehcim\n");
            else if(n==4)printf("Odranoel\n");
        }
    }
    return 0;
}
