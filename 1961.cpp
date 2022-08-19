/* 1961 - Jumping Frog */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,m,i,d,b;

    while(scanf("%d",&n)!=EOF)
    {
        b=0;
        scanf("%d",&m);
        int pipe[m];
        for(i=0; i<m; i++)
        {
            scanf("%d",&pipe[i]);
        }
        for(i=1; i<m; i++)
        {
            d=abs(pipe[i]-pipe[i-1]);
            if(d>n)
            {
                b=1;
                break;
            }


        }
        if(b==1)
            printf("GAME OVER\n");
        else
            printf("YOU WIN\n");
    }
    return 0;
}
