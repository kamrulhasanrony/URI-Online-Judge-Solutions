/* 1221 - Fast Prime Number */

#include <stdio.h>
#include<math.h>
int main()
{

    int i,num,count=0,j,n,root=0;
    scanf ("%d",&num);
    for(j=1; j<=num; j++)
        {
            scanf("%d",&n);
            if(n==0 || n==1)
                printf("Not Prime\n");

            else
            {
                count=1;
                root=sqrt(n);
                for(i=2; i<=root; i++)
                {
                    if(n%i==0)
                    {
                        count=0;
                        break;
                    }
                }
                if(count==1)
                    printf("Prime\n");
                else
                    printf("Not Prime\n");

        }
    }
    return 0;
}
