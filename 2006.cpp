/* 2006 - Identifying Tea */

#include<stdio.h>

int main()
{
    int tea,i,num=0,n;
    while(scanf("%d",&tea)!=EOF){
    for(i=0; i<5; i++)
    {
        scanf("%d",&n);
        if(n==tea)num++;
    }
    printf("%d\n",num);
    num=0;
    }
    return 0;
}
