/* 1192 - Paula's Mathematic Game */

#include<stdio.h>

int main()
{
    char xy;
    int ab,bc,test,i;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%d%c%d",&ab,&xy,&bc);
        if(ab==bc)printf("%d\n",ab*bc);

        else if(xy>='a' && xy<='z')
        {
            printf("%d\n",ab+bc);
        }
        else if(xy>='A' && xy<='Z')
        {
            printf("%d\n",bc-ab);
        }
    }
    return 0;
}
