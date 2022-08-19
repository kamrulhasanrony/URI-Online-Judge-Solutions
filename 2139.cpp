/* 2139 - Pedrinho's Christmas */

#include<stdio.h>

int main()
{
    int month,day,ar[12]= {31,29,31,30,31,30,31,31,30,31,30,25},x,i;

    while(scanf("%d %d",&month,&day)!=EOF)
    {
        if(month==12 && day ==25)printf("E natal!\n");
        else if(month==12 && day ==24)printf("E vespera de natal!\n");
        else if(month==12 && day>25)printf("Ja passou!\n");
        else
        {
            x = ar[month-1] - day;

            for(i = month ; i < 12 ; i++)
            {
                x=x+ar[i];
            }
            printf("Faltam %d dias para o natal!\n",x);
        }
        x=0;
    }



    return 0;
}
