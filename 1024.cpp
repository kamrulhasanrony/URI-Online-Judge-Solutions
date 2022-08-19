/* 1024 - Encryption */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    getchar();
    for(int tc=1; tc<=t; tc++)
    {
        string s;
        getline(cin,s);
        int n=s.size();
        for(int i=0; i<n; i++)
        {
            if((s[i]>='a' && s[i]<='z')||(s[i]>='A' && s[i]<='Z'))
            {
                s[i]=(s[i]+3);
            }
        }
        reverse(s.begin(),s.end());
        for(int i=n/2; i<n; i++)
        {
            s[i]=(s[i]-1);
        }
        cout<<s<<'\n';
    }
    return 0;
}

