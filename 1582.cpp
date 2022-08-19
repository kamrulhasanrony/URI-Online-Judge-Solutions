/* 1582 - The Pythagorean Theorem */

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int ar[3];
    int x,y,z;
    while(scanf("%d %d %d",&x,&y,&z)!=EOF)
    {
        ar[0]=x;
        ar[1]=y;
        ar[2]=z;
        sort(ar+0,ar+3);

        int a = ar[0]*ar[0];
        int b = ar[1]*ar[1];
        int c = ar[2]*ar[2];

        if(a+b==c && __gcd(__gcd(x,y),z)==1) cout<<"tripla pitagorica primitiva"<<endl;
        else if(a+b==c && __gcd(__gcd(x,y),z)!=1) cout<<"tripla pitagorica"<<endl;

        else
            cout<<"tripla"<<endl;

    }
    return 0;
}
