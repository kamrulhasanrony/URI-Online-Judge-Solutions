/* 1061 - Event Time */

#include<stdio.h>
int main()
{
    int d1,d2,h1,m1,s1,h2,m2,s2;
    long long sec1,sec2,sec,r,h,m,s,p,q;

    scanf("%*s %d",&d1);
    scanf("%d %*s",&h1);
    scanf("%d %*s",&m1);
    scanf("%d",&s1);

    scanf("%*s %d",&d2);
    scanf("%d %*s",&h2);
    scanf("%d %*s",&m2);
    scanf("%d",&s2);


    sec1=(s1+(m1*60)+(h1*3600)+(d1*24*3600));
    sec2=(s2+(m2*60)+(h2*3600)+(d2*24*3600));

   sec= (sec2-sec1);
    r=sec/86400;
    p=sec%86400;
    h=p/3600;
    q=p%3600;
    m=q/60;
    s=q%60;
    printf("%d dia(s)\n",r);
    printf("%d hora(s)\n",h);
    printf("%d minuto(s)\n",m);
    printf("%d segundo(s)\n",s);

    return 0;
}


