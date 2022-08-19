/* 1837 - Preface */

#include<stdio.h>
int main()
{
    int a,b,c,e,q,f,r;
    scanf("%d %d",&a,&b);
    if(a<0)
    {
        e=b;
        if(b<0)
            e=b*-1;
        for(c=0; c<e; c++)
        {
            f=a-c;
            if(f%b==0)break;
        }
        q=f/b;
        r=(a-b*q);
    }
    else
    {
        q=a/b;
        r=a%b;
    }
    printf("%d %d\n",q,r);
    return 0;
}
