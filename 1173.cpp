/* 1173 - Array fill I */

#include<stdio.h>
int main()
{
  int ar[10],i,b;
  scanf("%d",&ar[0]);
  b=ar[0];
  for(i=0;i<10;i++)
  {
      printf("N[%d] = %d\n",i,b);
      b=b*2;
  }
    return 0;
}
