/*
 1
 0 0
 1 1 1
 0 0 0 0
 1 1 1 1 1
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n = 5;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%2d", i % 2);
        }
        printf("\n");
    }
    return 0;
}
