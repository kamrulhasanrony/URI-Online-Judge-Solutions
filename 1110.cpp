/* 1110 - Throwing Cards Away */

#include<stdio.h>
#include<deque>

int main()
{
    int n,i;

    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        std::deque<int>letter;
        for(i=1; i<=n; i++)
        {
            letter.push_back(i);
        }

        printf("Discarded cards:");

        while(letter.size()>1)
        {
            if(letter.size()!=2)printf(" %d,",letter.front());
            else
                printf(" %d",letter.front());

            letter.pop_front();
            letter.push_back(letter.front());
            letter.pop_front();

        }
        printf("\nRemaining card:");
        printf(" %d\n",letter.front());
    }
    return 0;
}
