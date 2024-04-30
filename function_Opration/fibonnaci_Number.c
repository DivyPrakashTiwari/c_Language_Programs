#include<stdio.h>

int main()
{
    printf("Program for fibonaaci\n");
            
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
    
    return 0;
}
