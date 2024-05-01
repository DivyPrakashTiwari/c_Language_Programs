#include <stdio.h>
#include <string.h>

// Function declaration for the string reversal function
void strev(char str[]);

int main() {
    // Initialize a character array named 'name' with the value "C program is best"
    char name[] = "C program is best";

    // Print the original string
    printf("%s\n", name);

    // Print the message indicating that the reverse of the string is to be displayed
    printf("the reverse of the string is\n");

    // Call the string reversal function
    strev(name);

    return 0;
}

// Function definition for the string reversal function
void strev(char str[]) {
    // Calculate the length of the input string
    int len = strlen(str);

    // Loop through the string in reverse order, printing each character
    for (len; len >= 0; len--) {
        putchar(str[len - 1]);
    }
}