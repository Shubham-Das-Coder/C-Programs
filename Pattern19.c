#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=0;j<=4;j++)
        {
            printf("%2d",(i+j)%2);
        }
        printf("\n");
    }
    return 0;
}
