/* 2388 - Tacógrafo */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        ans+=(a*b);
    }
    cout<<ans<<endl;
}
