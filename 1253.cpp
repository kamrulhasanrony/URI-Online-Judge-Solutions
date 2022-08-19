/* 1253 - Caesar Cipher */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>s>>n;
        for(auto it : s){
            char letter = it-n;
            if(letter<65){
                letter+=26;
            }
            cout<<letter;
        }
        cout<<'\n';
    }
    return 0;
}
