#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("%c",i+j+65);
        }
        printf("\n");
    }
    return 0;
}
