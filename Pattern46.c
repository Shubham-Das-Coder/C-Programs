/*
  2
  4  6
  8 10 12
 14 16 18 20
 22 24 26 28 30
 */
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n = 5, x = 2;
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
