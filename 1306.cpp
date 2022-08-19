/* 1306 - Numbering Roads */

#include<stdio.h>

int main()
{
    int r,n,i,flag,k=1;
    while(scanf("%d %d",&r,&n)==2)
    {
        if(r==0 && n==0)break;
        flag=0;
        if(n>=r)printf("Case %d: 0\n",k);
        else
        {
            for(i=1; i<27; i++)
            {
                if(n*(i+1)>=r)
                {
                    printf("Case %d: %d\n",k,i);
                    flag=1;
                    break;

                }
            }
            if(flag==0)printf("Case %d: impossible\n",k);

        }
        k++;
    }

    return 0;
}
