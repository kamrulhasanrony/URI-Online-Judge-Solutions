/* 1987 - Divisibility by 3 */

#include<stdio.h>

int main()
{
    int i,a,b,cnt,mod;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        cnt =0;
        for(i=0; i<a; i++)
        {
            mod= b%10;
            cnt = cnt +mod;
            b = b/10;
        }
        if(cnt%3==0)printf("%d sim\n",cnt);
        else
            printf("%d nao\n",cnt);
    }
    return 0;
}
