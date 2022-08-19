/* 1214 - Above Average */

#include <stdio.h>

int main(){
    int c,n,i;
    float sum,s;

    scanf("%d",&c);
    while(c > 0){
            scanf("%d",&n);
            sum = 0;
            s = 0;
            int num[n];
            for(i = 0; i < n; i++){
                    scanf("%d",&num[i]);
                    sum+=num[i];
            }
            sum /= n;
            for(i = 0; i < n; i++){
                    if(num[i] > sum) s++;
            }
            printf("%.3f%%\n",s/n*100.000);
            c--;
    }
    return 0;
}
