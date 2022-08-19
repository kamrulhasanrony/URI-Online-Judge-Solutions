/* 1005 - Average 1 */

#include <stdio.h>
int main()
{
    float a,b,MEDIA;
    scanf("%f %f", &a, &b);
    MEDIA=(a*3.5 + b*7.5)/(3.5+7.5);
    printf("MEDIA = %.5f\n", MEDIA);

    return 0;
}
