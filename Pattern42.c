/*
1
23
345
4567
56789
*/
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",i+j-1);
        }
        printf("\n");
    }
    return 0;
}
