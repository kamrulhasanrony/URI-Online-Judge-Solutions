/* 1071 - Sum of Consecutive Odd Numbers I */

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,i,c,d,sum=0,tum=0,dif;
    scanf("%d",&a);
    scanf("%d",&b);
    c=abs(a);
    d=abs(b);
    for(i=1; i<c; i+=2)
    {
        sum=sum+i;
    }
    for(i=1; i<d; i+=2)
    {
        tum=tum+i;
    }
    dif=(sum-tum);
    printf("%d\n",dif);

    return 0;
}


