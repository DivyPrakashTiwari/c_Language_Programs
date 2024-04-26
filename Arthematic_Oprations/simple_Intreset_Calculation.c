#include <stdio.h> // This is the standard input/output library in C
#include <math.h> // This is the math library in C, which contains mathematical functions such as pow

int main() // This is the entry point of the program
{
	float c, p, r, t; // Declaring four floating-point variables: c for compound interest, p for principal amount, r for rate of interest, and t for time duration

	printf("Enter the principal amount, rate of interest, and time duration: "); // Prompting the user to enter the required values
	scanf("%f %f %f", &p, &r, &t); // Storing the user input in the respective variables

	c = p * pow((100 + r) / 100, t); // Calculating the compound interest using the formula: c = p * ( (100 + r) / 100 ) ^ t

	printf("The compound interest is: %.2f\n", c); // Printing the calculated compound interest with 2 decimal places

	return 0; // Returning 0 to indicate successful execution
}