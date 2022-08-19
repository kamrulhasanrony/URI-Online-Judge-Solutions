/* 1075 - Remaining 2 */

#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=0; i<=10000; i++)
    {
        if(i%a==2)
            printf("%d\n",i);
    }
    return 0;
}
