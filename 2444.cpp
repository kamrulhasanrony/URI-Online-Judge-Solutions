/* 2444 - Volume da TV */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int initial,test,i,val;
    scanf("%d %d",&initial,&test);
    for(i = 0; i<test; i++)
    {
        scanf("%d",&val);
        if(initial+val>100)initial = 100;
        else if(initial+val>0)initial = initial + val;
        else
            initial =0;

    }

    printf("%d\n",initial);

    return 0;

}
