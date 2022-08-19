/* 1847 - Welcome to the Winter! */

#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(b<c || b==c)printf(":)\n");
        else if(b>c)
        {
            if((b-c)<(a-b))printf(":)\n");
            else if((b-c)>=(a-b))printf(":(\n");
        }


    }
    else if(a<b)
    {

        if(b>c || b==c)printf(":(\n");
        else if(b<c)
        {
            if((c-b)<(b-a))printf(":(\n");
            else if((c-b)>=(b-c))printf(":)\n");
        }
    }
    else if(a==b)
    {


        if(c>b)printf(":)\n");
        else
            printf(":(\n");
    }

    return 0;
}
