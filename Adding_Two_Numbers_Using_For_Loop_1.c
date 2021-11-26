#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the two numbers\n");
    scanf("%d %d", &num1, &num2);
    if (num1 > num2)
    {
        while (num2 > 0)
        {
            num1++;
            num2--;
        }
        printf("%d", num1);
    }
    else
    {
        while (num1 > 0)
        {
            num1--;
            num2++;
        }
        printf("%d", num2);
    }
    return (0);
}