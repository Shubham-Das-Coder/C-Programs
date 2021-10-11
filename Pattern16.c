#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%3d",i+j-1);
        }
        printf("\n");
    }
    return 0;
}
