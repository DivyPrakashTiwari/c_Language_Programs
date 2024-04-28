#include <stdio.h>

// Function: main()
// Description: The main function where the program starts execution
int main() {
    // Declare variables: n, i, j, k
    // n: the number to be checked as prime
    // i: loop variable for iterating from n to 1
    // j: remainder of n divided by i
    // k: counter for the number of times n is divisible by i
    int n, i, j, k;
    k = 0;  // Initialize k to 0

    // Prompt user to enter the number to be checked as prime
    printf("Enter the number to be checked as prime: ");
    scanf("%d", &n);

    // Loop from n to 1
    for (i = n; i > 0; i--) {
        // Calculate the remainder of n divided by i
        j = n % i;

        // If the remainder is 0, increment the counter k
        if (j == 0) {
            k = k + 1;
        }
    }

    // If k is greater than 2, the number is not prime
    if (k > 2) {
        printf("The entered number %d is not prime.\n", n);
    }
    // Otherwise, the number is prime
    else {
        printf("The entered number %d is prime.\n", n);
    }

    // Return 0 to indicate successful execution
    return 0;
}