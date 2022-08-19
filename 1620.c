/* 1620 - Delaunay Triangulation */
#include <stdio.h>

int main()
{
    long double i, x,l;

    while(scanf("%Lf", &l) && l != 0)
    {
        i = ((l - 3) * 2) + 3;
        x = (i - l) / l;
        printf("%.6Lf\n", x);
    }

    return 0;
}
