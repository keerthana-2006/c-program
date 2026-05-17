/*
12. Pointers
Explanation: Pointers are variables that store memory addresses. They enable direct memory manipulation.

Syntax:
-------
data_type *pointer_name;
pointer_name = &variable;  // Address of operator
*pointer_name;  // Dereference operator
Example:
-------
*/
#include <stdio.h>

int main() {
    int num = 42;
    int *ptr;  // Pointer declaration
    ptr = &num;  // Store address of num
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value in ptr: %p\n", ptr);
    printf("Value pointed by ptr: %d\n", *ptr);
    
    // Changing value through pointer
    *ptr = 100;
    printf("\nAfter changing through pointer:\n");
    printf("Value of num: %d\n", num);
    
    // Pointer arithmetic
    int arr[5] = {10, 20, 30, 40, 50};
    int *arr_ptr = arr;  // Points to first element
    
    printf("\nArray using pointer arithmetic:\n");
    for(int i = 0; i < 5; i++) {
        printf("*(arr_ptr + %d) = %d\n", i, *(arr_ptr + i));
    }
    
    // Array name as pointer
    printf("\narr[2] = %d\n", arr[2]);
    printf("*(arr + 2) = %d\n", *(arr + 2));
    
    // Pointer to pointer
    int **ptr2 = &ptr;
    printf("\nValue of num using double pointer: %d\n", **ptr2);
    
    return 0;
}
