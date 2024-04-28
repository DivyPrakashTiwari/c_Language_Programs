#include <stdio.h>

// Function: main()
// Description: The main function where the program starts execution
int main()
{
    // Initialize variables
    int n, i, j, count, w, mul, sum, t, c;

    // Initialize count and mul variables to 0
    count = 0;
    mul = 1;

    // Initialize sum variable to 0
    sum = 0;

    // Prompt user to enter a number to check if it's a palindrome
    printf("Enter the number to be checked as palindrome \n");

    // Read the number entered by user
    scanf("%d", &n);

    // Assign the number to i and c variables
    i = n;
    c = n;

    // Calculate the number of digits in the number
    do {
        n = n / 10;
        count++;
    } while (n > 0);

    // Initialize w variable to 0
    w = 0;

    // Calculate the multiplier based on the number of digits
    for (w; w < count - 1; w++)
    {
        mul = mul * 10;
    }

    // Reverse the number and calculate the sum of the original and reversed number
    while (c > 0)
    {
        j = c % 10;
        t = j * mul;
        sum = sum + t;
        mul = mul / 10;
        printf("%d", j);
        c = c / 10;
    }

    // Check if the original number is equal to the sum of the original and reversed number
    if (i == sum)
    {
        // Print that the number is a palindrome
        printf("The number %d is palindrome number", i);
    }
    else
    {
        // Print that the number is not a palindrome
        printf("The number %d is not palindrome number", i);
    }

    // Return 0 to indicate successful execution
    return 0;
}