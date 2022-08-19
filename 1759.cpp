/* 1759 - Ho Ho Ho */

#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    char ch []= {"Ho"};
    for(i=0; i<n-1; i++)
    {
        printf("%s ",ch);
    }
    printf("Ho!\n");
    return 0;
}
