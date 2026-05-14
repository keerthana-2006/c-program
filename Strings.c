/*
10. Strings
Explanation: Strings are character arrays terminated by a null character \0.

Syntax:
--------
char string_name[size];
char string_name[] = "Hello";
Example:
--------
*/

#include <stdio.h>
#include <string.h>  // String functions

int main() {
    // String declaration and initialization
    char str1[20] = "Hello";
    char str2[] = "World";
    char str3[20];
    
    // String input
    printf("Enter a string: ");
    fgets(str3, sizeof(str3), stdin);
    
    // Remove newline from fgets
    str3[strcspn(str3, "\n")] = 0;
    
    // String functions
    printf("\nString 1: %s\n", str1);
    printf("String 2: %s\n", str2);
    printf("String 3: %s\n", str3);
    
    // String length
    printf("Length of str1: %lu\n", strlen(str1));
    
    // String concatenation
    strcat(str1, " ");
    strcat(str1, str2);
    printf("Concatenated: %s\n", str1);
    
    // String copy
    char str4[20];
    strcpy(str4, str3);
    printf("Copied string: %s\n", str4);
    
    // String comparison
    if(strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are different\n");
    }
    
    // Character by character access
    printf("\nCharacters of str2: ");
    for(int i = 0; str2[i] != '\0'; i++) {
        printf("%c ", str2[i]);
    }
    
    return 0;
}
