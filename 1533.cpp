/* 1533 - Detective Watson */
#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int n, b, pos;

    while(cin >> n && n != 0)
    {
        int array[n];
        int array_copy[n];

        for(int i = 0; i < n; ++i)
        {
            cin >> b;
            array[i] = b;
        }
        memcpy(array_copy, array, sizeof array_copy);
        sort(array_copy, array_copy + n);
        pos = array_copy[n - 2];

        for(int i = 0; i < n; ++i)
        {
            if(pos == array[i])
                cout << (i + 1) << endl;
        }
    }

    return 0;
}
