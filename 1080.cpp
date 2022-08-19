/* 1080 - Highest and Position */

#include<stdio.h>
int main()
{
    int i,a,input,max=0,position;
    for(i=1;i<=100;i++)
    {
        scanf("%d",&input);
        if(max<input){
            max=input;
        position=i;
        }
    }
    printf("%d\n",max);
    printf("%d\n",position);

    return 0;
}
