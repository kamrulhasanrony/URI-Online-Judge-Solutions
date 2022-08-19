/* 2322 - Peça Perdida */

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,i,j;
    cin>>n;
    int arr[n+1];
    memset(arr,0,sizeof(arr));
    for(i=1; i<n; i++)
    {
        cin>>p;
        arr[p] = p;
    }
    for(j=1; j<=n; j++)
    {
        if(arr[j]==0)printf("%d\n",j);
    }
    return 0;
}
