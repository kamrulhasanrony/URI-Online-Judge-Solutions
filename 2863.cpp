/* 2863 - Umil Bolt */

#include<stdio.h>

int main()
{
    int test,i;
    double ab[11],max;
    while(scanf("%d",&test)!=EOF){
    for(i=0; i<test; i++)
    {
        scanf("%lf",&ab[i]);
    }
    max = ab[0];
    for (i=1; i<test; i++)
    {
        if (ab[i] < max)
        {
            max= ab[i];
        }
    }
    printf("%.2lf\n",max);
    }
    return 0;
}
