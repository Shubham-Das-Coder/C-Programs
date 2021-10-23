#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printf("The Original Array Is\n");
    for (int i = 0; i < 9; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\nThe Array In Reverse Order Is\n");
    for (int j = 8; j >= 0; j--)
    {
        printf("%d  ", a[j]);
    }
    return 0;
}
