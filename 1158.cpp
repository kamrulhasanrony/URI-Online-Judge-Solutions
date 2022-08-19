/* 1158 - Sum of Consecutive Odd Numbers III */

#include<stdio.h>
int main()
{
    int x,y,i,sum=0,j,n;
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        scanf("%d%d",&x,&y);
        if(x%2==0)x++;
        for(i=1; i<=y; i++)
        {
            sum=sum+x;
            x=x+2;
        }
        printf("%d\n",sum);
        sum=0;
    }
    return 0;
}
