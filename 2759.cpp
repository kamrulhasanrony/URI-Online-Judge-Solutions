/* 2759 - Input and Output Character */

#include<stdio.h>
#include<string.h>

int main()
{
    char a[10],b[10],c[10];
    while(scanf("%s %s %s",&a,&b,&c)!=EOF)
    {
        printf("A = %s, B = %s, C = %s\n",a,b,c);
        printf("A = %s, B = %s, C = %s\n",b,c,a);
        printf("A = %s, B = %s, C = %s\n",c,a,b);
    }
    return 0;
}
