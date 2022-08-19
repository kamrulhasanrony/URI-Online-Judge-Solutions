/* 2752 - Output 6 */

#include<stdio.h>

int main()
{
    char ar[50] = {"AMO FAZER EXERCICIO NO URI"};
    printf("<%s>\n",ar);
    printf("<%30s>\n",ar);
    printf("<%.20s>\n",ar);
    printf("<%-20s>\n",ar);
    printf("<%-30s>\n",ar);
    printf("<%.30s>\n",ar);
    printf("<%30.20s>\n",ar);
    printf("<%-30.20s>\n",ar);

    return 0;
}
