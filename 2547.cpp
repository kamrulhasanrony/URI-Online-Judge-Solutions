/* 2547 - Roller Coaster */

#include<stdio.h>

int main()
{
    int test,min,max,n,count=0,i;
    while(scanf("%d",&test)!=EOF){
        scanf("%d %d",&min,&max);
    for(i=0; i<test; i++)
    {
        scanf("%d",&n);
        if(n>=min && n<=max)
        {
            count++;
        }
    }
    printf("%d\n",count);
    count=0;
    }
    return 0;
}
