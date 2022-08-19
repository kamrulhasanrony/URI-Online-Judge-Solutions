/* 1848 - Counting Crow */

#include<stdio.h>
#include<string.h>
int main()
{
    char ch[10];
    int n=0,k=0;
    for(; k!=3;)
    {
        gets(ch);
        if(ch[0]=='*')
        {
            if(ch[1]=='-')
            {
                if(ch[2]=='-')n+=4;
                else
                    n+=5;
            }
            else
            {
                if(ch[2]=='-')n+=6;
                else
                    n+=7;
            }

        }
        else if(ch[0]=='-')
        {
            if(ch[1]=='-')
            {
                if(ch[2]=='-')n+=0;
                else
                    n+=1;
            }
            else
            {
                if(ch[2]=='-')n+=2;
                else
                    n+=3;
            }
        }
        if(ch[0]=='c')
        {
            printf("%d\n",n);
            k++;
            n=0;
        }


    }
    return 0;
}
