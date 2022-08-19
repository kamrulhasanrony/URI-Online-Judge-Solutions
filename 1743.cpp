/* 1743 - Automated Checking Machine */

#include<stdio.h>

int main()
{
    int a,b,c,d,e;
    int f,g,h,i,j;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&e)!=EOF)
    {
        scanf("%d %d %d %d %d",&f,&g,&h,&i,&j);

        if(((a==0 && f==1)||(a==1 && f==0))&&((b==0 && g==1)||(b==1 && g==0))&&((c==0 && h==1)||(c==1 && h==0))&&((d==0 && i==1)||(d==1 && i==0))&&((e==0 && j==1)||(e==1 && j==0)))
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
