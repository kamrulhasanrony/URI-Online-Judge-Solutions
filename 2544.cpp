/* 2544 - Kage Bunshin no Jutsu */

#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
        {
            if(pow(2,i)==n)
            {
                printf("%d\n",i);
                break;

            }
        }
    }
    return 0;
}
