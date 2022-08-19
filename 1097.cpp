/* 1097 - Sequence IJ 3 */

#include<stdio.h>
int main()
{
    int i,a=7,b=6,c=5;
    for(i=1; i<=9; i+=2)
    {
        printf("I=%d J=%d\n",i,a);
        printf("I=%d J=%d\n",i,b);
        printf("I=%d J=%d\n",i,c);
        a+=2,b+=2,c+=2;
    }
    return 0;
}
