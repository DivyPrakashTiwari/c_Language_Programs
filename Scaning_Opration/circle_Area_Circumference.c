#include <stdio.h>  // This is the standard input/output library in C, which allows the program to perform input and output operations.

int main()  // This is the entry point of the program.
{
	float r, per, ar, pie;  // Declaring variables r, per, ar, pie as floating point numbers.
	pie = 3.14;  // Initializing the variable pie to the approximate value of pi.

	printf("enter the value of radius\n");  // Prompting the user to enter the value of the radius of the circle.
	scanf("%f", &r);  // Reading the user's input and storing it in the variable r.

	per = 2 * pie * r;  // Calculating the circumference of the circle using the formula 2 * pi * r and storing it in the variable per.
	ar = pie * r * r;  // Calculating the area of the circle using the formula pi * r * r and storing it in the variable ar.

	printf("perimeter of circle=%f\n", per);  // Printing the calculated circumference of the circle.
	printf("area of circle=%f\n", ar);  // Printing the calculated area of the circle.

	return 0;  // Returning 0 to indicate that the program has executed successfully.
}