#include <stdio.h>  // Importing the standard input/output library
#include <math.h>  // Importing the math library

// Main function
int main() {
    int n, i, k, sum;  // Initializing variables
    sum = 0;  // Initializing sum to 0

    // Prompting user to enter the number to be checked as perfect
    printf("Enter the number to be checked as perfect: ");
    scanf("%d", &n);

    k = n;  // Storing the original number in k

    // Looping through numbers from 1 to n-1
    for (i = 1; i < n; i++) {
        // Checking if n is divisible by i
        if (n % i == 0) {
            // If divisible, adding i to sum
            sum += i;
        }
    }

    // Checking if sum is equal to k
    if (sum == k) {
        // If equal, printing that the number is a perfect number
        printf("YES %d is a perfect number\n", k);
    } else {
        // If not equal, printing that the number is not a perfect number
        printf("NO %d is not a perfect number\n", k);
    }

    // Returning 0 to indicate successful execution
    return 0;
}