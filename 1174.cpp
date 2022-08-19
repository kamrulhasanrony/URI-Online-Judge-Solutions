/* 1174 - Array Selection I */

#include<stdio.h>
int main()
{
    int i;
  double ar[100];
  for(i=0;i<100;i++)
  {
      scanf("%lf",&ar[i]);
      if(ar[i]<=10)
      {
          printf("A[%d] = %.1lf\n",i,ar[i]);
      }
  }
    return 0;
}
