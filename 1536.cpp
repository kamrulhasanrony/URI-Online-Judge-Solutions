/* 1536 - Libertadores */
#include<stdio.h>

int main()
{
    int test_case;
    scanf("%d",&test_case);
    while(test_case--)
    {
        char c;
        int a,b;
        scanf("%d %c %d",&a,&c,&b);
        int A,B;
        scanf("%d %c %d",&B,&c,&A);
        if(a+A>b+B)
        {
            printf("Time 1\n");
        }
        else if(a+A<b+B)
        {
            printf("Time 2\n");
        }
        else
        {
            if(A<b)
                printf("Time 2\n");
            else if(A>b)
                printf("Time 1\n");
            else
            {
                printf("Penaltis\n");
            }
        }
    }
    return 0;
}
