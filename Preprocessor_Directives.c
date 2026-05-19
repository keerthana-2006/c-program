/*
16. Preprocessor Directives
Explanation: Preprocessor directives are commands processed before compilation that manipulate the source code.

Common Directives:

#include - include header files

#define - define macros

#undef - undefine macros

#ifdef, #ifndef, #if, #else, #elif, #endif - conditional compilation

#pragma - implementation-specific instructions

Example:
---------
*/
#include <stdio.h>

// Macro definition
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

// Conditional compilation
#define DEBUG 1

// Stringizing operator (#)
#define STRINGIFY(x) #x

// Token pasting operator (##)
#define CONCAT(a, b) a##b

int main() {
    // Using macros
    float radius = 5.0;
    float area = PI * radius * radius;
    printf("Area: %.2f\n", area);
    
    int num = 5;
    printf("Square of %d: %d\n", num, SQUARE(num));
    printf("Max of %d and %d: %d\n", 10, 20, MAX(10, 20));
    
    // Stringizing
    printf("STRINGIFY(Hello): %s\n", STRINGIFY(Hello World));
    
    // Token pasting
    int var1 = 100;
    printf("CONCAT(var, 1): %d\n", CONCAT(var, 1));
    
    // Conditional compilation for debugging
    #ifdef DEBUG
        printf("\n*** DEBUG MODE ENABLED ***\n");
        printf("Value of num: %d\n", num);
        printf("Value of radius: %.2f\n", radius);
    #endif
    
    // #if directive
    #if PI > 3.0
        printf("\nPI is greater than 3.0\n");
    #else
        printf("\nPI is not greater than 3.0\n");
    #endif
    
    // #ifndef (if not defined)
    #ifndef VERSION
        #define VERSION "1.0"
        printf("Version: %s\n", VERSION);
    #endif
    
    return 0;
}
