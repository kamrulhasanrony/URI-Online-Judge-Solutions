/* 2414 - Desafio do Maior Número */
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int temp=0;
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)break;
        else if(n>temp)
        {
            temp = n;
        }
    }
    cout<<temp<<endl;

    return 0;

}
