/* 2840 - Balloon++ */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    int r,total,area,ans;
    scanf("%d %d",&r,&total);
    area = 4/(float)3*3.1415*r*r*r;
    ans = (total/area);
    printf("%d\n",ans);

return 0;
}
