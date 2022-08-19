/* 2060 - Bino's Challenge */

#include<stdio.h>

int main()
{

    int test,ar,cnt2=0,cnt3=0,cnt4=0,cnt5=0,i;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%d",&ar);
        if(ar%2==0)cnt2++;
        if(ar%3==0)cnt3++;
        if(ar%4==0)cnt4++;
        if(ar%5==0)cnt5++;
    }
    printf("%d Multiplo(s) de 2\n",cnt2);
    printf("%d Multiplo(s) de 3\n",cnt3);
    printf("%d Multiplo(s) de 4\n",cnt4);
    printf("%d Multiplo(s) de 5\n",cnt5);

    return 0;
}
