/* 1890 - Putting Plates on the Tuk-tuks */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,c,d;
    cin>>test;
    while(test--)
    {
        cin>>c>>d;
        int ans =1;
        if(c==0 && d==0)
        {
            cout<<0<<endl;
        }
        else
        {
            while(c)
            {
                ans = ans*26;
                c--;
            }
            while(d)
            {
                ans = ans*10;
                d--;
            }
            cout<<ans<<endl;

        }
    }
    return 0;
}
