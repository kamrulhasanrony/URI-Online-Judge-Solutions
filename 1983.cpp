/* 1983 - The Chosen */

#include<stdio.h>
int main()
{
    int test;
    scanf("%d",&test);
    int code[test],i,final_value;
    double frac[test],val=0.0;
    for(i=0; i<test; i++)
    {
        scanf("%d %lf",&code[i],&frac[i]);
    }
    for(i=0; i<test; i++)
    {
        if(frac[i]>val)
        {
            val=frac[i];
            final_value=i;
        }
    }
    if(val<8)
        printf("Minimum note not reached\n");
    else
        printf("%d\n",code[final_value]);
    return 0;
}
