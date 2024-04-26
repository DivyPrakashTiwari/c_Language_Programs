#include <stdio.h>  // This is the header file for input/output functions

int main() {
    int a, b;  // Declaring two integer variables 'a' and 'b'

    printf("Enter the two numbers: ");  // Prompting the user to enter two numbers
    scanf("%d %d", &a, &b);  // Reading the two numbers entered by the user

    // Swapping the values of 'a' and 'b' without using a temporary variable
    // Subtracting 'b' from 'a' and storing the result in 'a'
    a = a - b;
    // Adding 'a' and 'b' and storing the result in 'b'
    b = a + b;
    // Subtracting 'a' from 'b' and storing the result in 'a'
    a = b - a;

    printf("The numbers after swapping: \n");  // Printing the swapped numbers
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}