#include<stdio.h>

// Function declaration for the main function
int main() {
    // Initialize variables: n for user input, i and j for loops, and fac for factorial
    int n, i, j, fac;

    // Initialize factorial to 1
    fac = 1;

    // Prompt user to enter the number for which the factorial is to be calculated
    printf("Enter the number who's factorial to be calculated: ");
    scanf("%d", &n);

    // Calculate the factorial using a for loop
    for (i = n; i > 0; i--) {
        fac = fac * i;
    }

    // Print the result of the factorial calculation
    printf("The factorial of %d is = %d", n, fac);

    // Return 0 to indicate successful execution
    return 0;
}