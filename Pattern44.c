/*
 1
 3 2
 6 5 4
10 9 8 7
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, k = 0;
    int n = 4;
    for (i = 1; i <= 4; i++)
    {
        k += i;
        for (j = k; j > k - i; j--)
        {
            printf("%2d", j);
        }
        printf("\n");
    }
    return 0;
}
