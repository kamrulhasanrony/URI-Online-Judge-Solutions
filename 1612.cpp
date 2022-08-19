/* 1612 - Little Ant */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int test,ans;
    double x;
    scanf("%d",&test);
    for(int i=0; i<test; i++)
    {
        scanf("%lf",&x);
        ans = ceil(x/2);
        printf("%d\n",ans);
    }
    return 0;
}
