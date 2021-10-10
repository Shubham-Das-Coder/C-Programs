#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,x=2;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%3d",x);
            x=x+2;
        }
        printf("\n");
    }
    return 0;
}
