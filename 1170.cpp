/* 1170 - Blobs */

#include<stdio.h>

int main()
{
    float a;
    int count=0,test,i;
    scanf("%d",&test);
   for(i=0;i<test;i++)
    {
        scanf("%f",&a);
        count=0;
        while(a>1)
        {
            a=a/2.0;
            count++;

        }
        printf("%d dias\n",count);
    }
    return 0;
}
