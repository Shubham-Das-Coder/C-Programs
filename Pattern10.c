#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%d%d",j,i);
        }
        printf("\n");
    }
    return 0;
}
