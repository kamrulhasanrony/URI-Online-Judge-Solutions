/* 1279 - Leap Year or Not Leap Year and … */


#include<stdio.h>
#include<string.h>
#include<math.h>
#include<bits/stdc++.h>
typedef long long ll;
int main()
{
    ll n,p,q,l,m4,m55,m100,m400,m15;
    char y[100005];
    bool b =false;
    while(gets(y))///input as a character array..
    {
        if(b)printf("\n");
        b =true;
        m4=m55=m100=m400=m15=q=p=0;
        l = strlen(y);
        for(int i=0; i<l; i++)
        {
            m4 = ((m4*10)+(y[i]-'0'))%4;
            m55 = ((m55*10)+(y[i]-'0'))%55;
            m15 = ((m15*10)+(y[i]-'0'))%15;
            m100 = ((m100*10)+(y[i]-'0'))%100;
            m400 = ((m400*10)+(y[i]-'0'))%400;

        }
        if((m4==0 && m100!=0)||(m400==0))
        {
            printf("This is leap year.\n");
            p=1;
            q=1;

        }
        if(m15==0)
        {
            printf("This is huluculu festival year.\n");
            q=1;
        }
        if(m55==0  && p==1)
        {
            printf("This is bulukulu festival year.\n");
        }
        else if(q==0)printf("This is an ordinary year.\n");
    }
    return 0;
}
