/* C program to find largest among
   Three numbers using ternary operator
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, larg; // Variable declaration
    printf("Enter three number\n");
    scanf("%d %d %d", &a, &b, &c);
    larg = a > b ? a > c ? a : c : b > c ? b
                                         : c; // Largest among a, b and c
    printf("largest number is : %d", larg);   // Print the largest number
    getch();
}