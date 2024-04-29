#include <stdio.h>

// This is the main function where the program starts
int main() {
    // Declare and initialize variables
    int n, m, c, sum, diff, pro;
    float div;

    printf("WELCOME TO CALCULATOR\n");
    printf("1. for addition \n");
    printf("2. for subtraction\n");
    printf("3. for multiplication\n");
    printf("4. for division\n");
    printf("Enter your choice \n");
    scanf("%d", &c);

    // Prompt user to enter two digits
    printf("Enter the digits\n");
    scanf("%d%d", &n, &m);

    // Display menu for user to choose operation
    
    // Use switch statement to perform selected operation
    switch (c) {
        case 1:
            {
                // Calculate sum of two numbers
                sum = n + m;
                // Display result
                printf("%d + %d = %d\n", n, m, sum);
                break;
            }
        case 2:
            {
                // Calculate difference of two numbers
                diff = n - m;
                // Display result
                printf("%d - %d = %d\n", n, m, diff);
                break;
            }
        case 3:
            {
                // Calculate product of two numbers
                pro = n * m;
                // Display result
                printf("%d * %d = %d\n", n, m, pro);
                break;
            }
        case 4:
            {
                // Calculate quotient of two numbers
                div = (float)n / m;
                // Display result
                printf("%d / %d = %f\n", n, m, div);
                break;
            }
        default:
            {
                // Display error message if user enters invalid choice
                printf("Enter choice is wrong\n");
            }
    }

    // Return 0 to indicate successful execution
    return 0;
}
