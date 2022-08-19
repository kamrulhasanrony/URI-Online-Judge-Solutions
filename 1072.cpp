/* 1072 - Interval 2 */

#include<stdio.h>
int main()
{
    int t,i,a=0,b=0,n;
    scanf("%d",&t);
    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        if(n>=10 && n<=20)
            a++;
        else
            b++;
    }
    printf("%d in\n",a);
    printf("%d out\n",b);

}
