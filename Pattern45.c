/*
  1
  3  5
  7  9 11
 13 15 17 19
 21 23 25 27 29
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n = 5, x = 1;
    int i, j;
    for (i = n; i >= 1; i--)
    {
        for (j = n; j >= i; j--)
        {
            printf("%3d", x);
            x = x + 2;
        }
        printf("\n");
    }
    return 0;
}
