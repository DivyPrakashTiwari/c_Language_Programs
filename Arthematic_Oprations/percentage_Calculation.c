#include <stdio.h> // This line includes the standard input/output library, which allows the program to read input from the user and print output to the console.

int main() { // This line defines the main function, which is the entry point of the program.
    int n1, n2, n3, n4, n5; // These lines declare five integer variables to store the five numbers entered by the user.
    int sum; // This line declares an integer variable to store the sum of the five numbers.
    float avg, per; // These lines declare two floating-point variables to store the average and percentage of the five numbers, respectively.

    printf("enter the five numbers\n"); // This line prints a prompt to the console, asking the user to enter five numbers.
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5); // This line reads the five numbers from the user and stores them in the variables n1, n2, n3, n4, and n5.

    sum = n1 + n2 + n3 + n4 + n5; // This line calculates the sum of the five numbers and stores it in the variable sum.
    avg = (float)sum / 5; // This line calculates the average of the five numbers by dividing the sum by 5 and storing the result in the variable avg.
    per = (sum * 100) / 5; // This line calculates the percentage of the five numbers by multiplying the sum by 100 and dividing it by 5, and storing the result in the variable per.

    printf("the average of numbers =%f\n", avg); // This line prints the average of the five numbers to the console.
    printf("the percentage of numbers =%f\n", per); // This line prints the percentage of the five numbers to the console.

    return 0; // This line indicates that the program has finished executing successfully.
}