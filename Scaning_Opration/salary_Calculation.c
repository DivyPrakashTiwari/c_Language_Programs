// Types of Placeholders Covered:
// 1. Format Specifiers:
//    - %d: Placeholder for integers
//    - %f: Placeholder for floating-point numbers
//    - %c: Placeholder for characters
//    - %s: Placeholder for strings
//    - %p: Placeholder for pointers

// 2. Field Width and Precision:
//    - %5d: Specifies a field width of 5 characters for integer placeholders
//    - %.2f: Specifies a precision of 2 decimal places for floating-point placeholders

// 3. Flags:
//    - %-10s: Left-justifies strings within a field width of 10 characters
//    - %+d: Displays the sign for positive numbers

// 4. Argument Order:
//    - %1$d, %2$d: Specifies the order of arguments in the format string


// Include the standard input/output library
#include <stdio.h>

// Define the main function
int main() 
{
    // Declare variables for gross salary, basic salary, HRA, DA, and OA
    float gs, bs, hra, da, oa;

    // Print a message to the user to enter the basic salary
    printf("Enter the Basic salary: ");

    // Read the basic salary from the user input
    scanf("%f", &bs);

    // Calculate the HRA as 16% of the basic salary
    hra = 0.16 * bs;

    // Calculate the DA as 20% of the basic salary
    da = 0.2 * bs;

    // Set the OA to a fixed amount of 3598.00
    oa = 3598.00;

    // Calculate the gross salary as the sum of the basic salary, HRA, DA, and OA
    gs = bs + hra + da + oa;

    // Print the gross salary to the console
    printf("Gross balance: %f\n", gs);

    // Return 0 to indicate successful execution
    return 0;
}

