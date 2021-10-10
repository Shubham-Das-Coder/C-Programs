#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n=5,k=1,i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            printf("%3d",k++);
        }
        printf("\n");
    }
    return 0;
}
