/* 1936 - Factorial */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ar[10] = {0,1,2,6,24,120,720,5040,40320,362880};
    int n,c=0,i,n1 = 0,b1;
    cin >> n;
    b1 = n;
    while(b1!=0)
    {
        for(i = 1;  ; i++) if(ar[i] >= b1 or i > 8) break;
        if(ar[i] <= b1)
        {
            b1-=ar[i];
        }
        else
        {
            b1-=ar[i-1];
        }
        c++;
    }
    cout << c << endl;
    return 0;
}
