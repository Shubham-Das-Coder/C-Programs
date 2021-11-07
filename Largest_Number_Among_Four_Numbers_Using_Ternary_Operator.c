/* C program to find largest among
   Four numbers using ternary operator
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c, d, larg; // Variable declaration
    printf("Enter four number\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    larg = ((a > b && a > c && a > d) ? a : (b > c && b > d) ? b
                                        : (c > d)            ? c
                                                             : d);
    printf("largest number is : %d", larg); // Print the largest number
    getch();
}