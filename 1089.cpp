/* 1089 - Musical Loop */

#include<stdio.h>

int main()
{
    int ar[3],n,res,p0,p1,i;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        res=0;
        scanf("%d",&ar[0]);
        scanf("%d",&ar[1]);
        if(n==2)
        {
            if(ar[1]!=ar[0])res=2;
        }

        else
        {
            p0=ar[0];
            p1=ar[1];

            for(i=2; i<n; i++)
            {
                scanf("%d",&ar[2]);
                if((ar[1]>ar[0] && ar[1]>ar[2])|| (ar[1]<ar[0] && ar[1]<ar[2]))++res;
                ar[0]=ar[1];
                ar[1]=ar[2];
            }
            if((p0>p1 && p0>ar[2])||(p0<p1 && p0<ar[2]))++res;
                    if((ar[2]>p0 && ar[2]>ar[0])||(ar[2]<p0 && ar[2]<ar[0]))++res;

            }
    printf("%d\n",res);
}
    return 0;
}
