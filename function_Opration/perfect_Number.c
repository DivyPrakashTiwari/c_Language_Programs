#include <stdio.h>

// Function: main()
// Description: The main function where the program starts executing
int main()
{
    // Declare variables: n, a, k
    // n: user input number to be checked as perfect between 1 to 50
    // a: the sum of the proper divisors of n
    // k: a copy of n for later comparison
    int n, a, k;

    // Prompt user to enter the number to be checked as perfect between 1 to 50
    printf("Enter the number to be checked as perfect between 1 to 50\n");
    scanf("%d", &n);

    // Assign n to k
    k = n;

    // Call the per() function with n as an argument and assign the return value to a
    a = per(n);

    // Check if a is equal to k
    if (a == k)
    {
        // If true, print that n is a perfect number
        printf("YES %d is perfect number ", k);
    }
    else
    {
        // If false, print that n is not a perfect number
        printf("NO %d is not perfect number", k);
    }

    // Return 0 to indicate successful execution of the main function
    return 0;
}

// Function: per(int nn)
// Description: Calculate the sum of the proper divisors of nn
int per(int nn)
{
    // Declare variables: i, sum
    // i: loop variable
    // sum: the sum of the proper divisors of nn
    int i, sum;

    // Initialize sum to 0
    sum = 0;

    // Loop from 1 to nn - 1
    for (i = 1; i < nn; i++)
    {
        // Check if nn is divisible by i
        if (nn % i == 0)
        {
            // If true, add i to sum
            sum += i;
        }
    }

    // Return the sum of the proper divisors of nn
    return sum;
}