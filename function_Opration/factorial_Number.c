#include<stdio.h>

// Function declaration for the main function
int main()
{
    // Variable declarations for n, i, r
    int n, i, r;

    // Prompt the user to enter the number for which the factorial is to be calculated
    printf("Enter the number who's factorial to be calculated\n");
    scanf("%d", &n);

    // Call the fac function and store the result in r
    r = fac(n);

    // Print the result
    printf("The factorial is %d", r);

    // Return 0 to indicate successful execution
    return 0;
}

// Function definition for the fac function
// This function calculates the factorial of a given number
int fac(int nn)
{
    // Recursive call to the fac function
    // This will cause an infinite loop, as the base case is missing
    return fac(nn);
}