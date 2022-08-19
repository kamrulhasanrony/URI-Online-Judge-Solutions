/* 1095 - Sequence IJ 1 */

#include<stdio.h>
int main()
{
    int i,j=60;
    for(i=1; i<=37; i+=3)
    {
        printf("I=%d J=%d\n",i,j);
        j=j-5;
    }
    return 0;
}
