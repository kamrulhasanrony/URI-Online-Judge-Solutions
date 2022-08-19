/* 2826 - Lexical */

#include<stdio.h>
#include<string.h>

int main()
{
    int a1,b1;
    char a[100],b[100];
    scanf("%s %s",&a,&b);
    a1=strlen(a);
    b1=strlen(b);

    if((a[0]==b[0]) && (a[a1-1]!=a[b1-1])){
        printf("%s\n",b);
        printf("%s\n",a);
    }
    else if(a[0]>b[0]){
        printf("%s\n",b);
        printf("%s\n",a);
    }
    else if(a[0]<b[0]){
        printf("%s\n",a);
        printf("%s\n",b);
    }

    return 0;
}
