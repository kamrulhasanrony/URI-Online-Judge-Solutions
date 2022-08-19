/* 2311 - Diving */

#include<stdio.h>
#include<string.h>

int main()
{
    int test,i,j;
    char name[100];
    double diff,score;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%s",&name);
        scanf("%lf",&diff);
        double max = -1,min=100,ans=0;
        for(j=0;j<7;j++){
            scanf("%lf",&score);
            if(score>max) max = score;
            if(score<min) min = score;
            ans+=score;
        }
        ans-=(max+min);
        printf("%s %.2lf\n",name,(ans*diff));
    }

    return 0;
}
