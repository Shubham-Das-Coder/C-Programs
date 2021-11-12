// C Program to check whether a number is prime or not
#include <stdio.h>

int main()
{
    int num; // Declare the nummber
    printf("Enter the number\n");
    scanf("%d", &num); // Initialize the number

    int count = 0; // Declare a count variable

    for (int i = 2; i < num; i++) // Check for factors
    {
        if (num % i == 0)
            count++;
    }
    if (count != 0) // Check whether Prime or not
    {
        printf("Not a prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }

    return 0;
}
