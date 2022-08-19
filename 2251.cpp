/* 2251 - Towers of Hanoi */

#include<stdio.h>
#include<math.h>
int main()
{
    int n,ans,i=1;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)break;

        else
        {
            ans = pow(2,n)-1;
            printf("Teste %d\n%d\n\n",i,ans);
            i++;
        }
    }
    return 0;
}
