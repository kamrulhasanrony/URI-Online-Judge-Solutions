/* 1943 - Top N */

#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    if(n==1)printf("Top %d\n",1);
    else if(n==2 || n==3)printf("Top %d\n",3);
    else if(n==4|| n==5)printf("Top %d\n",5);
    else if(n>=6 && n<=10)printf("Top %d\n",10);
    else if(n>=11 && n<=25)printf("Top %d\n",25);
    else if(n>=26 && n<=50)printf("Top %d\n",50);
    else if(n>=51 && n<=100)printf("Top %d\n",100);
    return 0;

}
