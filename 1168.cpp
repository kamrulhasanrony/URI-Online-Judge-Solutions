/* 1168 - LED */

#include<stdio.h>
#include<string.h>

int main()
{
    char num[102];
    int i,j,l,test,led=0;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%s",&num);
        l=strlen(num);
        for(j = 0; j < l; j++)
        {
            if(num[j]=='1')led+=2;
            else if( num[j]=='2' || num[j]=='3' || num[j]=='5')led+=5;
            else if( num[j]=='4')led+=4;
            else if( num[j]=='0' || num[j]=='9' || num[j]=='6')led+=6;
            else if( num[j]=='7')led+=3;
            else if( num[j]=='8')led+=7;
        }
        printf("%d leds\n",led);
        led=0;
    }
    return 0;
}
