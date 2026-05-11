/*5. Operators
Explanation: Operators perform operations on variables and values.

Types of Operators:

Arithmetic: +, -, *, /, %
Relational: ==, !=, >, <, >=, <=
Logical: && (AND), || (OR), ! (NOT)
Assignment: =, +=, -=, *=, /=
Increment/Decrement: ++, --
Bitwise: &, |, ^, ~, <<, >>
*/
//Example:
#include <stdio.h>

int main() {
    int a = 10, b = 3;
    
    // Arithmetic
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);
    
    // Increment/Decrement
    printf("a++ = %d\n", a++);
    printf("++a = %d\n", ++a);
    
    // Relational
    printf("a > b: %d\n", a > b);
    
    // Logical
    printf("(a > b) && (a > 0): %d\n", (a > b) && (a > 0));
    
    return 0;
}
