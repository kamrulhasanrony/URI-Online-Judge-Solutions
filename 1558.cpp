/* 1558 - Sum of Two Squares */


#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,test,i,j,s;
    while(scanf("%d",&n)==1)
    {
        test=0;
        i=0;
        j=sqrt(n);

        while(j>=i)
        {
            s = pow(i,2)+pow(j,2);
            if(s==n)
            {
                test=1;
                break;
            }
            else if(s<n)
            {
                i++;
            }
            else
            {
                j--;
            }
        }
        if(test)printf("YES\n");
        else
            printf("NO\n");

    }
    return 0;
}
