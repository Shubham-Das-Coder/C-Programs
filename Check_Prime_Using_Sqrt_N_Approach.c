// C program to efficiently check whether a number is prime or not
#include <stdio.h>
#include <math.h>

int main()
{
    int num; // Declare the number
    printf("Enter the number\n");
    scanf("%d", &num); // Initialize the nummber
    int count = 0;
    for (int i = 2; i <= sqrt(num); i++) // Iterate from 2 to sqrt(num)
    {
        if (num % i == 0)
        {
            count++;
            break;
        }
    }
    if (count != 0) // Check whether prime or not
    {
        printf("Not a prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }

    return 0;
}
