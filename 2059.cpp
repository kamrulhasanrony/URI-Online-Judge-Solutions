/* 2059 - Odd, Even or Cheating */

#include<stdio.h>

int main()
{
    int p,j1,j2,r,a,sum,win;
    while(scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a)!=EOF)
    {
        sum=j1+j2;
        if((sum%2==0 && p==1) || (sum%2!=0 && p==0))win=1;
        else
            win=2;
        if((r==1 && a==0)||(r==0 && a==1))win=1;
        else if(r==1 && a==1) win=2;
        printf("Jogador %d ganha!\n",win);
    }

    return 0;
}
