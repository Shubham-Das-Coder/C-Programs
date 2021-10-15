/*
EJOTY
DINSX
CHMRW
BGLQV
AFKPU
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,x;
    for(i=1;i<=5;i++)
    {
        x=5-i;
        for(j=1;j<=5;j++)
        {
            printf("%c",x+65);
            x=x+5;
        }
        printf("\n");
    }
    return 0;
}
