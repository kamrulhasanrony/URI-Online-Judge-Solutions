/* 1154 - Ages */

#include<stdio.h>
int main()
{
    int d=0,a;
    double ans,age=0;
    while(1)
    {
        scanf("%d",&a);
        if(a>0)
        {
            age=age+a;
            d=d+1;
            continue;
        }
        else
            break;

    }
    ans=(age/d);
    printf("%.2lf\n",ans);
    return 0;
}
