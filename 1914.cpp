/* 1914 - Whose Turn Is It? */

#include<stdio.h>
int main()
{
    int n,i;
    long long int a,b;
    char ch1[101],ch2[6],ch3[101],ch4[6];
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%s %s %s %s",&ch1,&ch2,&ch3,&ch4);
        scanf("%lld %lld",&a,&b);
        a=a+b;
        if(ch2[0]=='I')
        {
            if(a%2==0)printf("%s\n",ch3);
            else
                printf("%s\n",ch1);
        }
        else
        {
            if(a%2==0)printf("%s\n",ch1);
            else
                printf("%s\n",ch3);

        }
    }
    return 0;
}
