/* 1180 - Lowest Number and Position */

#include<stdio.h>
int main()
{
    int n,i,j,pos=0,k=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&ar[i]);
    }
    int min=ar[0];
    for(j=1; j<n; j++)
    {
        if(min>ar[j])
        {
            min=ar[j];
        }
    }
    while(1)
    {
        if(min==ar[k])
            break;
        k++;
        pos++;
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,pos);
    return 0;
}
