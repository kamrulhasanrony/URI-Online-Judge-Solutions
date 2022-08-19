/* 1078 - Multiplication Table */

#include<stdio.h>
int main()
{
    int a,i,mul;
    scanf("%d",&a);
    for(i=1;i<=10;i++)
    {
          mul=i*a;
          printf("%d x %d = %d\n",i,a,mul);
    }
    return 0;
}
