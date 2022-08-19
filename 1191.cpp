/* 1191 - Tree Recovery */


#include<bits/stdc++.h>
using namespace std;
int constant;
void post_order(string pre, string in, int initial, int last);

int main()
{
    string pre, in;

    while(cin >> pre >> in)
    {
        constant = -1;
        post_order(pre, in, 0, pre.size()-1);
        cout << "\n";
    }
    return 0;
}

void post_order(string pre, string in, int initial, int last)
{
    if(last>=initial)
    {
        constant++;
        int position = in.find(pre[constant]);
        post_order(pre, in, initial, position - 1);
        post_order(pre, in, position + 1, last);
        cout << in[position];
    }
}
