/* 1429 - Factorial Again! */
#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,sum,j;
    char ar[100];
    int pp[6]= {1,2,6,24,120,720};
    while(scanf("%s",&ar)!=EOF)
    {


        int n = 0, p, len;
        len = strlen(ar);
        for(p=0; p<len; p++)
        {
            n = n * 10 + ( ar[p] - '0' );
        }
        if(n==0)break;
        i=0;
        while(n!=0)
        {
            ar[i]=n%10;
            i++;
            n=n/10;
        }
        sum=0;
        for(j=0; j<len; j++)
        {
            sum = sum + ar[j]*pp[j];
        }
        printf("%d\n",sum);
    }
    return 0;
}
