/*
AFKPU
BGLQV
CHMRW
DINSX
EJOTY
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,x;
    for(i=0;i<5;i++)
    {
        x=i;
        for(j=1;j<=5;j++)
        {
            x=x+5;
            printf("%c",x-5+65);
        }
        printf("\n");
    }
    return 0;
}
