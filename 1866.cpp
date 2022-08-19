/* 1866 - Bill */

#include<stdio.h>
#include<string.h>
int main()
{
    int a,i,n;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&n);
        if(n%2==0)printf("0\n");
        else
            printf("1\n");
    }
    return 0;
}
