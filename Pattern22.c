#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%2d",i%2);
        }
        printf("\n");
    }
    return 0;
}
