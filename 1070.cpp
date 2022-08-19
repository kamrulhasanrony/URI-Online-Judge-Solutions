/* 1070 - Six Odd Numbers */

#include<stdio.h>
int main()
{

    int x,a,sum=0;
    scanf("%d",&x);
    for(a=x; x<=a; a++)
    {
        if(sum<6)
        {
            if(a%2!=0)
            {
                printf("%d\n",a);
                sum=sum+1;
            }
        }
    }
    return 0;
}
