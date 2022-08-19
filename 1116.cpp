/* 1116 - Dividing X by Y */

#include<stdio.h>
int main()
{
    int n,i;
    double a,b;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%lf %lf",&a,&b);
        if(a!=0 && b!=0)
            printf("%.1lf\n",a/b);
        else if(a==0 && b!=0)
            printf("%.1lf\n",a/b);
        else if(a!=0 && b==0)
            printf("divisao impossivel\n");
    }
    return 0;
}
