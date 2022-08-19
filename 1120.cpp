/* 1120 - Contract Revision */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    string num;
    while(1)
    {
        char d,check;
        int k=0,i,p=1;
        cin >> d;
        if(d=='0')
            break;
        cin>>num;
        for(i=0; num[i]!='\0'; i++)
        {
            if(num[i]==d)
                k++;
            if(num[i]!=d)
            {
                check = num[i];
                if(check!='0')
                    p=2;
                if(p!=1)
                    cout << num[i];
                else if(p==1 && num[i+1]=='\0')
                    cout<<0;
            }
        }
        if(k==i)
            cout<<0;
        cout<<'\n';
    }
    return 0;
}
