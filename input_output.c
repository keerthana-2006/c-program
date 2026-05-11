/*
6. Input and Output
Explanation: C uses standard input/output functions to communicate with the user.

Common Functions:

printf() - formatted output
scanf() - formatted input
getchar() - read a character
putchar() - display a character
gets()/puts() - string I/O (deprecated, use fgets())
*/
/*
Syntax:
-------
printf("format string", variable_list);
scanf("format string", &variable_list);
*/
//Example
#include <stdio.h>

int main() {
    int age;
    float height;
    char name[50];
    
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Enter your height: ");
    scanf("%f", &height);
    
    printf("\n--- User Information ---\n");
    printf("Name: %s", name);
    printf("Age: %d\n", age);
    printf("Height: %.2f\n", height);
    
    // Character I/O
    char ch = getchar();
    putchar(ch);
    
    return 0;
}
