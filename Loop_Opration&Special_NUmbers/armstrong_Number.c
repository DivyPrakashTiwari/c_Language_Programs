#include <stdio.h>

// Function: main()
// Description: The main function where the program starts execution
int main()
{
    // Declare and initialize variables
    int n, i, j, k, sum;
    sum = 0;

    // Prompt user to enter a number to check if it's an Armstrong number
    printf("Enter the number to be checked as Armstrong: ");
    scanf("%d", &n);

    // Assign the input number to variable i for later comparison
    i = n;

    // Loop until the number becomes 0 (all digits have been processed)
    while (n > 0)
    {
        // Extract the last digit of the number
        j = n % 10;

        // Calculate the cube of the last digit
        k = j * j * j;

        // Add the cube of the last digit to the sum
        sum = sum + k;

        // Remove the last digit from the number
        n = n / 10;
    }

    // Compare the original number and the calculated sum
    if (i == sum)
    {
        // Print that the number is an Armstrong number
        printf("YES %d is an Armstrong number\n", i);
    }
    else
    {
        // Print that the number is not an Armstrong number
        printf("NO %d is not an Armstrong number\n", i);
    }

    // Return 0 to indicate successful execution
    return 0;
}