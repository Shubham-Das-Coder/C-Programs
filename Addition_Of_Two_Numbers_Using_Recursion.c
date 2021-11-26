#include <stdio.h>
int add(int, int);
int main()
{
    int num1, num2;

    printf("Enter the two Numbers\n");
    scanf("%d %d", &num1, &num2);

    printf("%d + %d = %d", num1, num2, add(num1, num2));
    return (0);
}

int add(int num1, int num2)
{
    if (!num1)
        return num2;
    else
        return add((num1 & num2) << 1, num1 ^ num2);
}