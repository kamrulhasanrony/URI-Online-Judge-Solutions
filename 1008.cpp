/* 1008 - Salary */

#include <stdio.h>
int main()
{

int NUMBER,hour;
float SALARY;
scanf("%d %d %f", &NUMBER, &hour, &SALARY);
printf("NUMBER = %d\n", NUMBER);

printf("SALARY = U$ %.2f\n", hour*SALARY);


return 0;
}
