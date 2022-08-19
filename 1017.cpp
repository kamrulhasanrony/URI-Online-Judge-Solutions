/* 1017 - Fuel Spent */

#include <stdio.h>
int main()
{
float time,as,fn;//avarage speed,fuel needed
scanf("%f %f", &time, &as);
fn = (time*as)/12;
printf("%.3f\n", fn);

return 0;
}
