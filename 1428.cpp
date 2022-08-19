/* 1428 - Searching for Nessy */
#include<stdio.h>
#include<math.h>
int main()
{
    int test,c,d;
    double a,b;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%lf %lf",&a,&b);
        int c = ceil((a-2.0)/3.0);
        int d = ceil((b-2.0)/3.0);
        printf("%d\n",c*d);

    }
    return 0;
}
