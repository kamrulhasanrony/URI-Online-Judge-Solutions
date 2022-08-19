/* 1094 - Experiments */

#include <stdio.h>
int main()
{
    int n,i,c=0,h=0,s=0,a,t;
    char b,x = '%';
    double p,q,r;
    scanf("%d",&n);
    for(i = 0; i < n; i++)
    {
        scanf("%d %c",&a,&b);
        if (b == 'C')c = c + a;
        else if (b == 'R') h= h + a;
        else if (b == 'S')s = s + a;
    }
    t = h+s+c;
    p =(c*100.00)/t;
    q =(h*100.00)/t;
    r =(s*100.00)/t;
    printf("Total: %d cobaias\n",t);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",h);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %c\n",p,x);
    printf("Percentual de ratos: %.2f %c\n",q,x);
    printf("Percentual de sapos: %.2f %c\n",r,x);
    return 0;
}
