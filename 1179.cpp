/* 1179 - Array Fill IV */


#include<stdio.h>
int main()
{
    int n,i,E[5],O[5],a=0,b=0,l;
    for(i=0; i<15; i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            E[a]=n;
            a++;
            if(a==5)
            {
                for(l=0; l<5; l++)
                {
                    printf("par[%d] = %d\n",l,E[l]);
                    E[l]=0;
                    a=0;
                }
            }
        }
        else
        {
            O[b]=n;
            b++;
            if(b==5)
            {
                for(l=0; l<5; l++)
                {
                    printf("impar[%d] = %d\n",l,O[l]);
                    O[l]=0;
                    b=0;
                }
            }

        }
    }
    for(i=0; i<5; i++)
    {
        if(O[i]==0)break;
        printf("impar[%d] = %d\n",i,O[i]);
    }
    for(i=0; i<5; i++)
    {
        if(E[i]==0)break;
        printf("par[%d] = %d\n",i,E[i]);
    }

    return 0;
}


