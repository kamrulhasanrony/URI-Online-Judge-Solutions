/* 1172 - Array Replacement I */

#include<stdio.h>
int main()
{
    int ar[10],b,i,c=0;
    for(i=0; i<10; i++)
    {
        scanf("%d",&ar[i]);
        b=ar[i];
        if(b==0 || b<0)
        {
            b=1;
        }
        printf("X[%d] = %d\n",c,b);
        b=0;
        c++;
    }
    return 0;
}
