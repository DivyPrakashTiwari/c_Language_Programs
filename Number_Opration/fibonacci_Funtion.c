#include<stdio.h>

// Function prototype for the main function
int main() {
    // Variable declarations
    int n, fibo;

    // Prompt user to enter the length of the Fibonacci sequence
    printf("Enter the length of the Fibonacci sequence: ");
    // Read user input for the length of the Fibonacci sequence
    scanf("%d", &n);

    // Call the fibbo function and store the result in fibo
    fibo = fibbo(n);

    // Print the Fibonacci sequence
    printf("The Fibonacci sequence is: %d ", fibo);

    // Return 0 to indicate successful execution
    return 0;
}

// Function to calculate the nth number in the Fibonacci sequence
int fibbo(int num) {
    // Initialize variables
    int i, fib;

    // Set initial values for i and fib
    i = 0;
    fib = 0;

    // Loop through the Fibonacci sequence up to the nth number
    while (i <= num) {
        // Calculate the next number in the Fibonacci sequence
        fib = fib + i;

        // Increment i
        i++;
    }

    // Return the nth number in the Fibonacci sequence
    return fib;
}