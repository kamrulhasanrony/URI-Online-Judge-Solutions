/* 1318 - Fake Tickets */
#include<stdio.h>
#include<string.h>
int main()
{
    int a,b,count=0,d;
    int i,j;
    int ar[10001];
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        if (a==0 && b==0) break;
        memset(ar,0,sizeof(ar));
        count=0;
        for(j=0; j<b; j++)
        {


            scanf("%d",&d);
            ar[d]++;
            if(ar[d]==2)count++;

        }
        printf("%d\n",count);
    }
    return 0;
}

