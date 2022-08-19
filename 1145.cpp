/* 1145 - Logical Sequence 2 */

#include<stdio.h>
int main()
{
    int a,b,n,s=1,l,i,j;
    scanf("%d %d",&a,&b);
    n=b/a;
    l=a;
    for(i=1; i<=n; i++)
    {
        printf("%d",s);
        for(j=s+1; j<=l; j++)
        {
            printf(" %d",j);
        }
        printf("\n");
        s=s+a;
        l=l+a;
    }
    return 0;
}
