/* 1234 - Dancing Sentence */

#include<stdio.h>
#include<string.h>

int main()
{
    char str[1000];
    int i,j,k,l,m,n;

    while(gets(str)!=NULL)
    {
        k=strlen(str);
        n=0;
        for(i=0; i<k; i++)
        {
            if(str[i]!=' ')
            {
                n++;
                if(n%2!=0)
                {
                    if(str[i]>='a'&& str[i]<='z')
                        str[i]=str[i]-32;
                    else
                        str[i]=str[i];
                }
                else
                {
                    if(str[i]>='A' && str[i]<='Z')
                        str[i]=str[i]+32;
                    else
                        str[i]=str[i];
                }

            }
        }
        printf("%s\n",str);
    }


    return 0;
}
