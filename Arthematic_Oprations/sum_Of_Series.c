#include <stdio.h> // This line includes the standard input/output library, which allows the program to perform input and output operations.

int main() // This is the entry point of the program.
{
	float n, sum; // Two floating-point variables are declared: n (to store the nth term) and sum (to store the sum of the series).

	printf("enter the nth term\n"); // This line prompts the user to enter the value of n.
	scanf("%f", &n); // This line reads the user's input and stores it in the n variable.

	sum = ((n * n + 1) / 2) * ((n * n + 1) / 2) + ((n * n + 1) / 2); // This line calculates the sum of the series using the formula: sum = ((n^2 + 1)/2) * ((n^2 + 1)/2) + ((n^2 + 1)/2)

	printf("the sum of series %f ", sum); // This line prints the sum of the series.

	return 0; // This line indicates that the program has executed successfully.
}
