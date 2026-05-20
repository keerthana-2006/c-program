/*
Type Casting:
-------------
Explanation: Type casting converts a value from one data type to another.

Types:
------
1.Implicit (automatic) casting
2.Explicit (manual) casting

Syntax:
-------
(type_name) expression
Example:
  */

#include <stdio.h>

int main() {
    // Implicit casting
    int a = 10;
    float b = a;  // int to float automatically
    printf("Implicit casting: %d -> %.2f\n", a, b);
    
    // Explicit casting
    float x = 5.75;
    int y = (int)x;  // float to int
    printf("Explicit casting: %.2f -> %d\n", x, y);
    
    // Integer division vs float division
    int num1 = 10, num2 = 3;
    float result1 = num1 / num2;  // Integer division (3.0)
    float result2 = (float)num1 / num2;  // Float division (3.333...)
    
    printf("Integer division: %d / %d = %.2f\n", num1, num2, result1);
    printf("Float division: (float)%d / %d = %.2f\n", num1, num2, result2);
    
    // Casting in expressions
    int total = 85;
    int count = 10;
    float average = (float)total / count;
    printf("Average: %.2f\n", average);
    
    // Pointer casting
    int int_value = 65;
    char *char_ptr = (char*)&int_value;
    printf("\nInteger value: %d\n", int_value);
    printf("First byte as char: %c\n", *char_ptr);
    
    // Implicit casting in assignment
    char ch = 'A';
    int ascii = ch;  // char to int
    printf("ASCII value of '%c' is: %d\n", ch, ascii);
    
    return 0;
}
