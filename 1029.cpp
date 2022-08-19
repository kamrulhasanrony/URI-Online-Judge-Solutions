/* 1029 - Fibonacci, How Many Calls? */

#include<stdio.h>

int counter,call;

int fin(int n)
{
    if(n==0)
    {
        call++;
        return 0;
    }

    else if(n==1)
    {
        counter++;
        call++;
        return 1;
    }
    else{
        call++;
    return fin(n-1)+fin(n-2);
    }
}

int main()
{
    int test,n,din;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        counter=0,call=0;
        din=fin(n);
        printf("fib(%d) = %d calls = %d\n",n,call-1,counter);

    }
    return 0;
}
