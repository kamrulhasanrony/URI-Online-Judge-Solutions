/* 2143 - The Return of Radar */

#include<stdio.h>

int main()
{
    int test,i,n;
    while(scanf("%d",&test) && test){
        for(i=0;i<test;i++){
            scanf("%d",&n);
            if(n%2==0)printf("%d\n",n*2-2);
            else
                printf("%d\n",n*2-1);
        }
    }
    return 0;
}
