/*
2
24
246
2468
246810
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j*2);
        }
        printf("\n");
    }
    return 0;
}
