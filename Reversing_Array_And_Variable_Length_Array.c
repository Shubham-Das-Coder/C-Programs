#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Please Enter The Number Of Elements You Want In The Array:");
    scanf("%d", &n);
    int a[n];
    int i;
    printf("Please Enter %d Elements Of The Array\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements Of The Array In The Original Order Is\n");
    for (i = 0; i < n; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\nElements Of The Array In The Reverse Order Is\n");
    for (i = n - 1; i > 0; i--)
    {
        printf("%d  ", a[i]);
    }
    return 0;
}
