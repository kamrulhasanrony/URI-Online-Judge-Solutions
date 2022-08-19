/* 1113 - Ascending and Descending */

#include<stdio.h>
int main()
{
    int i,a,b;
    for(i=0; i<100; i++)
    {
        scanf("%d %d",&a,&b);
        if(a>b)
            printf("Decrescente\n");
        else if(a<b)
            printf("Crescente\n");
        else
            break;
    }
    return 0;
}
