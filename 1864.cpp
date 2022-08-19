/* 1864 - Our Days Are Never Coming Back */



#include<stdio.h>
int main()
{
    char ar[100]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    int i,n;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<=n-1;i++){
            printf("%c",ar[i]);
        }
        printf("\n");
    }
    return 0;
}
