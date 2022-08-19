/* 1329 - Head or Tail */

#include<stdio.h>

int main()
{
    int test,marry=0,john=0,n,i;
    while(scanf("%d",&test)!=EOF)
    {
        if(test==0)break;
        for(i=0; i<test; i++)
        {
            scanf("%d",&n);
            if(n==0)marry++;
            else if(n==1)john++;
        }
        printf("Mary won %d times and John won %d times\n",marry,john);
        marry=0,john=0;
    }

    return 0;
}
