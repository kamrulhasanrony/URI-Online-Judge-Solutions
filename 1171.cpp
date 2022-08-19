/* 1171 - Number Frequence */

#include<stdio.h>

int main()
{
    int cnt[2001],test,n,i;
    scanf("%d",&test);
    for(i=0; i<=2000; i++)
    {
        cnt[i]=0;
    }
    for(i=0; i<test; i++)
    {
        scanf("%d",&n);
        cnt[n]++;
    }

    for(i=1; i<=2000; i++)
    {
        if(cnt[i]>0)
        {
            printf("%d aparece %d vez(es)\n",i,cnt[i]);
        }
    }
    return 0;
}
