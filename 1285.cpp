/* 1285 - Different Digits */

#include<stdio.h>

int main()
{
    int a,b,number,digit,i,j,k,ans,flag;
    int num[4];

    while(scanf("%d %d",&a,&b)==2)
    {
        ans=0;
        for(i=a; i<=b; i++)
        {
            digit=0;
            flag=0;
            number=i;
            while (number != 0)
            {
                num[digit] = number%10;
                number /= 10;
                digit++;
            }
            for(j = 0; j < digit; j++)
            {
                for(k = j+1; k < digit; k++)
                {
                    if(num[j] == num[k])
                    {
                        flag = 1;
                    }
                }
            }
            if(flag==0)ans++;
        }
        printf("%d\n",ans);

    }
    return 0;
}
