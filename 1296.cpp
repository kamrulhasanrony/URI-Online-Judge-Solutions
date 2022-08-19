/* 1296 - Medians */

#include<bits/stdc++.h>

using namespace std;

#define pi 3.141592653589793


int main()
{
    vector<double> ar(3);
    while(cin>>ar[0]>>ar[1]>>ar[2])
    {
        sort(ar.begin(),ar.end());
        if(ar[0]+ar[1]>ar[2])
        {
            double s=(ar[0]+ar[1]+ar[2])/2.00;
            double area=sqrt(s*(s-ar[0])*(s-ar[1])*(s-ar[2]));
            area=4*area/3;
            printf("%.3lf\n",area);
        }
        else
        {
            printf("-1.000\n");
        }
    }
    return 0;

}
