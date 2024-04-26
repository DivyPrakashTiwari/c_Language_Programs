#include <stdio.h>  // This line includes the standard input/output library, which provides functions for reading and writing to the console.

int main() {  // This line defines the main function, which is the entry point of the program.
    int a, b, c;  // These lines declare three integer variables named a, b, and c.

    // The following lines prompt the user to enter two numbers and store them in the variables a and b.
    printf("Enter the two numbers: ");  // This line prints the string "Enter the two numbers: " to the console.
    scanf("%d %d", &a, &b);  // This line reads two integers from the console and stores them in the variables a and b.

    // The following lines swap the values of a and b.
    c = a;  // This line stores the value of a in the variable c.
    a = b;  // This line stores the value of b in the variable a.
    b = c;  // This line stores the value of c (which is the original value of a) in the variable b.

    // The following lines print the swapped values of a and b.
    printf("The numbers after swapping: \n");  // This line prints the string "The numbers after swapping: \n" to the console.
    printf("%d\n", a);  // This line prints the value of a to the console.
    printf("%d\n", b);  // This line prints the value of b to the console.

    return 0;  // This line indicates that the program has finished successfully and returns 0 to the operating system.
}