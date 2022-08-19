/* 1212 - Primary Arithmetic */

#include<stdio.h>

int main()
{
    int b1,b2,d,length,s,count,c,m1,m2;
    while(scanf("%d %d",&b1,&b2))
    {
        if(b1==0 && b2==0)
        {
            break;
        }
        if(b1>b2)d=b1;
        else
            d=b2;

        length=0;
        while(d!=0)
        {
            d=d/10;
            length++;
        }
        count =0;
        c=0;
        while(length!=0)
        {
            m1=b1%10;
            b1=b1/10;
            m2=b2%10;
            b2=b2/10;
            s=m1+m2+c;

            if(s>9)
            {
                count++;
                c=s/10;
            }
            else
                c=0;
            length--;
        }
        if(count==0)printf("No carry operation.\n");
        else if(count==1)printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",count);

    }
    return 0;
}
