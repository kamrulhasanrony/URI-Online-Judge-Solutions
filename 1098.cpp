/* 1098 - Sequence IJ 4 */

#include<stdio.h>
int main()
{
    float i,j;
    int t,p;
    for(i=0.0; i<2.1; i+=.2)
    {
        for(j=1.0; j<=3; j=j+1.0)
        {
            if(i>0.0 && i<1.0)printf("I=%.1lf J=%.1lf\n",i,j+i);
            else if(i>1.0 && i<2.0)printf("I=%.1lf J=%.1lf\n",i,j+i);
            else
            {
                t=i;
                p=t+j;
                printf("I=%.0lf J=%.0lf\n",i,j+i);
            }
        }
    }
    return 0;
}
