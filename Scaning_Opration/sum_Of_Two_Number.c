// Include the standard input/output library
#include <stdio.h>

// Define the main function, which is the entry point of the program
int main() 
{
    // Declare and initialize two integer variables to store the input numbers
    int num1 = 6, num2 = 9;

    // Declare an integer variable to store the sum of the two numbers
    int sum = 0;

    // Calculate the sum of the two numbers
    sum = num1 + num2;

    // Print the result to the console
    // The printf function is a formatted print function that takes a format string and a variable number of arguments
    // In this case, the format string contains three placeholders (%d) that are replaced with the values of num1, num2, and sum, respectively
    printf("The Sum of %d + %d = %d \n", num1, num2, sum);

    // Return 0 to indicate that the program has executed successfully
    return 0;
}