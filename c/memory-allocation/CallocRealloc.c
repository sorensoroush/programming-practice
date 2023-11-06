#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int size);

int main() {
    int arraySize = 5;
    int mallocArray[] = {0,1,2,3,4};
    int callocArray[] = {5,6,7,8,9};

    printArray(mallocArray, arraySize);
    printf("\n");
    printArray(callocArray, arraySize);

    /*
    Initialize two arrays
    Specify these are values to be written, not array to copy
    Initialize three pointers: malloc, calloc, realloc
        Allocate memory using appropriate command
    Print pointer, pointer's address, and deferenced content 
    Write contents of array to allocated memory
    Print pointer, pointer's address, and deferenced content 
    Free allocated contents
    Print pointer, pointer's address, and deferenced content 
    */
}

void printArray(int array[], int arraySize) {
    int arrayEnd = array + arraySize;
    while (array < arrayEnd) {
        printf("%d\n", *array);
        array++;
    }
}