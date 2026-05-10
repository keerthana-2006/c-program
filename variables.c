/*
3. Variables and Data Types
------------------------------
Explanation: Variables store data values. Each variable has a specific data type that determines its size and layout in memory.

Basic Data Types:
-----------------
bool - boolean values(0 or 1)
short int (2 byte) - small integers
int (2-4 bytes) - integers
long int (8 bytes)-big integers
char (1 byte) - characters
float (4 bytes) - floating-point numbers
double (8 bytes) - double precision floating-point
void - returns nothing 

Syntax:
-------
data_type variable_name = value; 
*/
//Example code
#include <stdio.h>

int main() {
    int age = 25;
    char grade = 'A';
    float height = 5.9;
    double pi = 3.14159265359;
    
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Height: %.1f\n", height);
    printf("Pi: %.10lf\n", pi);
    
    return 0;
}
