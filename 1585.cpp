/* 1585 - Making Kites */

#include<stdio.h>
int main()
{
int a,b,i,test;
scanf("%d",&test);
for(i=0;i<test;i++){
scanf("%d %d",&a,&b);
printf("%d cm2\n",a*b/2);
}
    return 0;
}
