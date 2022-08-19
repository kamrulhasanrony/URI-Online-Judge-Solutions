/* 2936 - How Much Cassava? */

#include <iostream>

using namespace std;

int main() {

    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    long long ans = (a*300)+(b*1500)+(c*600)+(d*1000)+(e*150)+225;
    cout<<ans<<endl;

    return 0;
}
