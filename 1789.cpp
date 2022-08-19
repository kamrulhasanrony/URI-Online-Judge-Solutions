/* 1789 - The Race of Slugs */

#include<stdio.h>
int main()
{
    int n,j,k,i,a;
    while(scanf("%d",&n)!=EOF)
    {
        j=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a);
            if(a>j)j=a;
        }
        if(j<10)k=1;
        else if(j>=20)k=3;
        else
            k=2;
        printf("%d\n",k);
    }
    return 0;
}
