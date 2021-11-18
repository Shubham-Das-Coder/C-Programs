/*
  1
  6  2
 10  7  3
 13 11  8  4
 15 14 12  9  5
*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n = 5;
    int i, j;
    int x = 1, y, t;
    for (i = n; i >= 1; i--)
    {
        y = i;
        t = x;
        for (j = n; j >= i; j--)
        {
            printf("%3d", t);
            t = t - y;
            y++;
        }
        x = x + i;
        printf("\n");
    }
    return 0;
}
