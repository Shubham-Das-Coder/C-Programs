#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter 2 integer numbers\n");
    scanf("%d %d", &a, &b);
    printf("You entered a = %d and b = %d\n", a, b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("After swapping a = %d and b = %d\n", a, b);
    return 0;
}