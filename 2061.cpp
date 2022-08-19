/* 2061 - Closing Tabs */

#include<stdio.h>
#include<string.h>
int main()
{
    int i,initial,test,num=0,attempt=0,cancel=0,final;
    char ab[10];
    scanf("%d %d",&initial,&test);
    for(i=0; i<test; i++)
    {
       scanf("%s",&ab);
        if(ab[0]=='f')
        {
            num=num+2;
            attempt++;
        }
        else if(ab[0]=='c')
        {
            cancel++;
        }
    }
    final=(initial + num - attempt - cancel );
    printf("%d\n",final);
    return 0;
}
