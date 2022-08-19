/* 2455 - Gangorra */
#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int p1,c1,p2,c2,a,b;
    scanf("%d %d %d %d",&p1,&c1,&p2,&c2);
    a = p1*c1;
    b= p2*c2;
    if(a==b)printf("0\n");
    else if(a>b)
        printf("-1\n");
    else
        printf("1\n");

    return 0;
}
