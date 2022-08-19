/* 1984 - The Pronalância Puzzle */

#include<stdio.h>
#include<string.h>

int main()
{
    long long int i,j,num;
    while(scanf("%lld",&num)!=EOF)
    {
        while(num)
        {
            i=num%10;
            num=num/10;
            printf("%d",i);
        }
        printf("\n");


    }

    return 0;
}
