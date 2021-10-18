/*
  1
  2  3
  4  5  6
  7  8  9 10
 11 12 13 14 15
 */
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,n=1;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%3d",n);
            n++;
        }
        printf("\n");
    }
    return 0;
}
