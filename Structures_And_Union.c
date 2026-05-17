/*
. Structures and Unions
Explanation: Structures group different data types together. Unions share memory among members.

Syntax:
-------
struct structure_name {
    data_type member1;
    data_type member2;
};

union union_name {
    data_type member1;
    data_type member2;
};
Example:
--------
  */
#include <stdio.h>
#include <string.h>

// Structure definition
struct Student {
    int id;
    char name[50];
    float marks;
    char grade;
};

// Union definition
union Data {
    int i;
    float f;
    char str[20];
};

// Typedef for cleaner code
typedef struct {
    int x;
    int y;
} Point;

int main() {
    // Structure variable
    struct Student student1;
    
    // Assigning values
    student1.id = 101;
    strcpy(student1.name, "John Doe");
    student1.marks = 85.5;
    student1.grade = 'A';
    
    printf("--- Student Information ---\n");
    printf("ID: %d\n", student1.id);
    printf("Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);
    printf("Grade: %c\n\n", student1.grade);
    
    // Array of structures
    struct Student class[3] = {
        {102, "Jane Smith", 92.0, 'A'},
        {103, "Bob Johnson", 78.5, 'B'},
        {104, "Alice Brown", 88.0, 'A'}
    };
    
    printf("Class Roster:\n");
    for(int i = 0; i < 3; i++) {
        printf("%d: %s - %.2f (Grade %c)\n", 
               class[i].id, class[i].name, 
               class[i].marks, class[i].grade);
    }
    
    // Structure with typedef
    Point p1 = {10, 20};
    printf("\nPoint coordinates: (%d, %d)\n", p1.x, p1.y);
    
    // Union example
    union Data data;
    
    data.i = 10;
    printf("Union as integer: %d\n", data.i);
    
    data.f = 220.5;
    printf("Union as float: %.2f\n", data.f);
    
    strcpy(data.str, "Hello");
    printf("Union as string: %s\n", data.str);
    
    // Note: The last assignment overwrote previous values
    printf("After string assignment, integer: %d (garbage)\n", data.i);
    
    return 0;
}
