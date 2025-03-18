#include <stdio.h>

int main() {
    char str1[100], str2[100];
    
    // Taking input
    printf("Enter first string: ");
    scanf("%99s", str1); // Read first string (avoiding buffer overflow)
    
    printf("Enter second string: ");
    scanf("%99s", str2); // Read second string
    
    // Printing the strings
    printf("You entered:\n");
    printf("First string: %s\n", str1);
    printf("Second string: %s\n", str2);
    
    return 0;
}