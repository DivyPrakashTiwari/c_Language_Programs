#include <stdio.h> // This line includes the standard input/output library, which allows the program to use functions like printf and scanf.

int main() // This is the main function, which is the entry point of the program.
{
    int s, l, b, tb, th, ps, pr, as, ar, at; // These are integer variables that will be used to store the side length of the square, the length and breadth of the rectangle, the height and base of the triangle, and the perimeter and area of each shape, respectively.

    printf("enter thr side of the square\n"); // This line prompts the user to enter the side length of the square.
    scanf("%d", &s); // This line reads the input from the user and stores it in the variable s.

    printf("enter thr lenghth & breadth of the rectangle\n"); // This line prompts the user to enter the length and breadth of the rectangle.
    scanf("%d%d", &l, &b); // This line reads the input from the user and stores it in the variables l and b.

    printf("enter thr height & base of the triangle\n"); // This line prompts the user to enter the height and base of the triangle.
    scanf("%d%d", &th, &tb); // This line reads the input from the user and stores it in the variables th and tb.

    ps = 4 * s; // This line calculates the perimeter of the square by multiplying the side length by 4.
    pr = 2 * (l + b); // This line calculates the perimeter of the rectangle by adding the length and breadth and multiplying by 2.
    as = s * s; // This line calculates the area of the square by squaring the side length.
    ar = l * b; // This line calculates the area of the rectangle by multiplying the length and breadth.
    at = 0.5 * th * tb; // This line calculates the area of the triangle by multiplying the height and base and dividing by 2.

    printf("perimeter of square=%d\n", ps); // This line prints the perimeter of the square.
    printf("perimeter of rectangle=%d\n", pr); // This line prints the perimeter of the rectangle.
    printf("area of square=%d\n", as); // This line prints the area of the square.
    printf("areaof rectangle=%d\n", ar); // This line prints the area of the rectangle.
    printf("area of triangle=%d\n", at); // This line prints the area of the triangle.

    return 0; // This line indicates that the program has executed successfully.
}