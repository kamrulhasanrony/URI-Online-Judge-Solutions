/* 1796 - Brazilian Economy */
#include<stdio.h>
int main()
{
long long unsigned a,n=0,y=0,test,i;
  scanf("%llu",&test);
  for(i=0;i<test;i++){
    scanf("%llu",&a);
    if(a==0)y++;
    else if(a==1)n++;
  }
  if(y>n)printf("Y\n");
  else
    printf("N\n");

return 0;
}
