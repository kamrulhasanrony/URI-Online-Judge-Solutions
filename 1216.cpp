/* 1216 - Getline One */


#include <bits/stdc++.h>

typedef long long ll;
int main()
{
    char arr[1000];
    ll distance, countt;
    double total;

    countt=0;
    total =0.0;

    while(scanf("%[^\n]",&arr) != EOF)
    {
        scanf("%lld",&distance);
        total += distance;
        countt++;
    }

    printf("%.1lf\n", total/(float)countt);
    return 0;
}
