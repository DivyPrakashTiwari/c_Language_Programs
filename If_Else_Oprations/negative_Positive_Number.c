// This program checks if a number is positive, negative, or zero

#include <stdio.h>

int main() {
    // Declare an integer variable 'x' to store the input number
    int x;

    // Prompt the user to enter a number
    printf("Enter the number\n");

    // Read the input number from the user and store it in 'x'
    scanf("%d", &x);

    // Check if the number is less than zero
    if (x < 0) {
        // If the number is less than zero, it is negative
        printf("The number is negative\n");
    }
    // Check if the number is greater than zero
    else if (x > 0) {
        // If the number is greater than zero, it is positive
        printf("The number is positive\n");
    }
    // If the number is not less than zero and not greater than zero, it must be zero
    else {
        // If the number is zero, print "The number is zero"
        printf("The number is zero\n");
    }

    // Return 0 to indicate that the program has executed successfully
    return 0;
}