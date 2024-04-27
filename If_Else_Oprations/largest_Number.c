#include<stdio.h>

int main()
{
    int a, b, c; // declare three integer variables

    printf("Enter the 3 numbers\n"); // prompt user to input three numbers
    scanf("%d%d%d", &a, &b, &c); // read input into variables a, b, and c

    if (a > b && a > c) // if a is greater than both b and c
    {
        printf("The largest number is %d", a); // print a as the largest number
    }
    else if (b > a && b > c) // if b is greater than both a and c
    {
        printf("The largest number is %d", b); // print b as the largest number
    }
    else // if neither a nor b is the largest number, then c must be the largest number
    {
        printf("The largest number is %d", c); // print c as the largest number
    }

    return 0;
}