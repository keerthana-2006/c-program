/*
11. Functions
Explanation: Functions are reusable blocks of code that perform specific tasks.

Types of Functions:

Library functions (printf, scanf)

User-defined functions

Syntax:
-------
return_type function_name(parameter_list) {
    // function body
    return value;
}
Example:
---------
  */
#include <stdio.h>

// Function declaration (prototype)
int add(int a, int b);
float calculateArea(float radius);
void printMessage(void);
int factorial(int n);

int main() {
    int x = 10, y = 20;
    float radius = 5.0;
    
    // Function call
    int sum = add(x, y);
    printf("Sum of %d and %d is: %d\n", x, y, sum);
    
    float area = calculateArea(radius);
    printf("Area of circle with radius %.2f: %.2f\n", radius, area);
    
    printMessage();
    
    int num = 5;
    printf("Factorial of %d is: %d\n", num, factorial(num));
    
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

float calculateArea(float radius) {
    return 3.14159 * radius * radius;
}

void printMessage(void) {
    printf("Hello from a function!\n");
}

// Recursive function example
int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
