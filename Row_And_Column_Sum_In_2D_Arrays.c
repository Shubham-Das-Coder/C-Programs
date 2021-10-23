#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[5][5];
    int sum = 0, i, j;
    printf("Please Enter The Elements Of The 5x5 Array\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    // Row sum
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("Row %d Total : %d\n", i, sum);
        sum = 0;
    }
    printf("\n");
    // Column sum
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 5; i++)
        {
            sum = sum + arr[i][j];
        }
        printf("Column %d Total : %d\n", j, sum);
        sum = 0;
    }
    return 0;
}
