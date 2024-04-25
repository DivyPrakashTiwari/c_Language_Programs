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