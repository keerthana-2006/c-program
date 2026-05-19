/*
15. File Handling
Explanation: File handling enables reading from and writing to files on disk.

File Modes:

"r" - read

"w" - write (overwrites)

"a" - append

"r+" - read and write

"w+" - read and write (overwrites)

"a+" - read and append

Common Functions:

fopen() - open file

fclose() - close file

fprintf() - formatted write

fscanf() - formatted read

fputc() / fgetc() - character I/O

fputs() / fgets() - string I/O

fwrite() / fread() - binary I/O

Example:
--------
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char buffer[100];
    
    // Writing to a file
    fp = fopen("example.txt", "w");
    
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(fp, "Hello, this is a test file.\n");
    fprintf(fp, "Line 2: Learning file handling in C.\n");
    
    fclose(fp);
    printf("File written successfully.\n\n");
    
    // Reading from a file
    fp = fopen("example.txt", "r");
    
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Reading file content:\n");
    while(fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    
    fclose(fp);
    
    // Appending to a file
    fp = fopen("example.txt", "a");
    
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(fp, "This line was appended.\n");
    fprintf(fp, "Another appended line.\n");
    
    fclose(fp);
    
    printf("\nAfter appending:\n");
    fp = fopen("example.txt", "r");
    while(fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
    
    // Binary file operations
    int numbers[5] = {10, 20, 30, 40, 50};
    int read_numbers[5];
    
    fp = fopen("data.bin", "wb");
    fwrite(numbers, sizeof(int), 5, fp);
    fclose(fp);
    
    fp = fopen("data.bin", "rb");
    fread(read_numbers, sizeof(int), 5, fp);
    fclose(fp);
    
    printf("\nBinary file content: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", read_numbers[i]);
    }
    printf("\n");
    
    return 0;
}
