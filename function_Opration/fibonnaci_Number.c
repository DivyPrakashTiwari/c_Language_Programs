#include<stdio.h>

int main()
{
    // Variable to store the user's choice
    int e;

    // Display the menu to the user
    printf("welcome to the menu driven program\n");
    printf("1.Program for factorial\n");
    printf("2.program for fibonaaci\n");
    printf("enter the program you want to access\n");

    // Read the user's choice
    scanf("%d",&e);

    // Switch case to handle different user choices
    switch(e)	
    {
        case 1:
        {
            // Variables for factorial calculation
            int n, i, fac;

            // Initialize factorial to 1
            fac = 1;

            // Prompt the user to enter a number
            printf("Enter the number who's factorial to be calculated");
            scanf("%d",&n);

            // Calculate the factorial
            for (i = n; i > 0; i--)
            {
                fac = fac * i;
            }

            // Display the result
            printf("The factorial of %d is =%d", n, fac);		
            break;
        }
        case 2:
        {
            // Variables for Fibonacci sequence
            int n, fib, i;

            // Initialize the first Fibonacci number to 0
            fib = 0;

            // Initialize the counter to -1
            i = -1;

            // Prompt the user to enter the length of the sequence
            printf("enter the length of the fibonacci sequence\n");
            scanf("%d",&n);

            // Display the Fibonacci sequence
            printf("the fibonacci sequence");
            while (i <= n)
            {
                fib = fib + i;
                i++;
                printf("%d ", fib);
            }
            break;
        }
        default :
        {
            // Handle invalid user input
            printf("the enter choice is wrong");
        }
    }	
    return 0;
}