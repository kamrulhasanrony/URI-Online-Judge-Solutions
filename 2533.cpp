/* 2533 - Internship */

#include<stdio.h>

int main()
{
    int m,ar[2],i,n,c;
    while(scanf("%d",&m)!=EOF){
        ar[0]=0;
        ar[1]=0;
        for(i=0;i<m;i++){
        scanf("%d %d",&n,&c);
        ar[0]+=n*c;
        ar[1]+=100*c;
    }
    printf("%.4f\n",(float)ar[0]/(float)ar[1]);
    }
    return 0;
}
