/* 2408 - Vice-Campeão */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int ar[3];
    memset(ar,0,sizeof(ar));
    cin>>ar[0]>>ar[1]>>ar[2];
    sort(ar,ar+3);
    cout<<ar[1]<<endl;

    return 0;
}
