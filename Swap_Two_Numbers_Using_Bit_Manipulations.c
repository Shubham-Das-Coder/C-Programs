/*
 * C Program to Swap two Numbers using Bitwise operators
 */
#include <stdio.h>
#include <string.h>

/* Function Prototype */
void swap(int *, int *);

void main()
{
    int num1, num2;
    printf("\nEnter two numbers\n");
    scanf("%d %d", &num1, &num2);
    printf("\nThe numbers before swapping are %d and %d", num1, num2);
    swap(&num1, &num2); /* Call by Reference to function swap */
    printf("\nThe numbers after swapping are %d and %d", num1, num2);
}

/* Code to swap two numbers using bitwise operator */
void swap(int *x, int *y)
{
    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}