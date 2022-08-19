/* 1794 - Laundry */

#include<stdio.h>

int main()
{
int n,a,b,x,y;
while(scanf("%d",&n)!=EOF){
scanf("%d %d",&a,&b);
scanf("%d %d",&x,&y);
if(n>=a && n<=b && n>=x && n<=y)printf("possivel\n");
else
    printf("impossivel\n");
}
return 0;
}
