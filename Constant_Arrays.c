#include <stdio.h>
int main(int argc, char const *argv[])
{
    const int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}; //The values ogf the array cant be changed
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", arr[i]);
    }
    return 0;
}
