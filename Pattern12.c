#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,x,n=5;
    for(i=1;i<=n;i++)
    {
        x=i;
        for(j=1;j<=n;j++)
        {
            printf("%3d",x);
            x=x+n;
        }
        printf("\n");
    }
    return 0;
}
