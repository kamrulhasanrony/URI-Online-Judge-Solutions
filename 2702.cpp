/* 2702 - Hard Choice */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    int d,e,f;
    cin>>a>>b>>c;
    cin>>d>>e>>f;
    int ans = (a<=d?(d-a):0)+(b<=e?(e-b):0)+(c<=f?(f-c):0);
    cout<<ans<<endl;
}

