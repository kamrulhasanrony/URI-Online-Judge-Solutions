/* 2582 - System of a Download */

#include<stdio.h>

int main()
{
    int test,x,y,fin,i;
    scanf("%d",&test);
    for(i=0; i<test; i++)
    {
        scanf("%d %d",&x,&y);
        fin=x+y;
        if(fin==0)printf("PROXYCITY\n");
        else if(fin==1)printf("P.Y.N.G.\n");
        else if(fin==2)printf("DNSUEY!\n");
        else if(fin==3)printf("SERVERS\n");
        else if(fin==4)printf("HOST!\n");
        else if(fin==5)printf("CRIPTONIZE\n");
        else if(fin==6)printf("OFFLINE DAY\n");
        else if(fin==7)printf("SALT\n");
        else if(fin==8)printf("ANSWER!\n");
        else if(fin==9)printf("RAR?\n");
        else if(fin==10)printf("WIFI ANTENNAS\n");
    }
    return 0;
}

