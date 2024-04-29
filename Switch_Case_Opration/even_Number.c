#include <stdio.h>

// This program prints out all the even numbers up to and including a given number

int main() {
    int n, i, j; // n is the input number, i is the loop variable, j is the remainder of i divided by 2

    // Prompt the user to enter a number
    printf("Enter the number\n");
    scanf("%d", &n);

    // Print out the even numbers
    printf("The even numbers are:\n");
    i = n;
    while (i > 0) 
	{
        j = i % 2;
        if (j == 0) {
            printf(" %d ", i);
        }
        i--;
    }

    return 0;
}