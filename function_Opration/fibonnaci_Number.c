#include<stdio.h>

int main()
{
    printf("Program for Fibonacci\n");
            
            // Variables for Fibonacci sequence
            int n, t1 = 0, t2 = 1, nextTerm = 0, i;

            // Prompt the user to enter the length of the sequence
            printf("Enter the length of the Fibonacci sequence\n");
            scanf("%d",&n);

            // Display the Fibonacci sequence
            printf("The Fibonacci sequence: ");
            for (i = 1; i <= n; ++i)
            {
                printf("%d ", t1);
                nextTerm = t1 + t2;
                t1 = t2;
                t2 = nextTerm;
            }
    
    return 0;
}
