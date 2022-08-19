/* 1009 - Salary with Bonus */

#include <stdio.h>
int main()


{
    float fs,ts,p,TOTAL;
    char firstname[20];
    scanf("%s", &firstname);//fixed salary
    scanf("%f", &fs);//total sell
    scanf("%f", &ts);
    p = (ts*15)/100;
    printf("TOTAL = R$ %.2f\n", fs+p);

    return 0;
}
