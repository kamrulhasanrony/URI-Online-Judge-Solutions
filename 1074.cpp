/* 1074 - Even or Odd */

#include<stdio.h>
int main()
{
    int t,i,a;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&a);

        if(a==0)
            printf("NULL\n");
        else if(a%2==0)
        {
            if(a>0)
            {
                printf("EVEN POSITIVE\n");

            }
            else
            {
                printf("EVEN NEGATIVE\n");
            }
        }
        else if(a%2!=0)

        {
            if(a>0)
            {
                printf("ODD POSITIVE\n");
            }
            else
            {
                printf("ODD NEGATIVE\n");
            }
        }
    }
    return 0;
}
