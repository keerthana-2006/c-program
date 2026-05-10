/*4. Constants and Literals
--------------------------
Explanation: Constants are fixed values that cannot be changed during program execution.

Types of Constants:
-------------------
-Integer constants
-Floating-point constants
-Character constants
-String literals

Syntax:
--------
#define CONSTANT_NAME value  // Preprocessor constant
const data_type var_name = value;  // const keyword
*/
//Example code

#include <stdio.h>
#define PI 3.14159
#define MAX 100

int main() {
    const int DAYS_IN_WEEK = 7;
    const float GRAVITY = 9.8;
    
    printf("PI: %.5f\n", PI);
    printf("MAX: %d\n", MAX);
    printf("Days in week: %d\n", DAYS_IN_WEEK);
    printf("Gravity: %.1f\n", GRAVITY);
    
    return 0;
}
