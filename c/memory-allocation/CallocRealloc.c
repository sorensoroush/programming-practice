#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int size);

int main() {
    int arraySize = 5;
    int mallocArray[] = {0,1,2,3,4};
    int callocArray[] = {5,6,7,8,9};

    int* mallocPointer = malloc(arraySize * sizeof(int));
    int* callocPointer = calloc(arraySize, sizeof(int));
    int* reallocPointer = realloc(mallocPointer, 2 * arraySize * sizeof(int));

    printf("\n");
    printf("Memory address of mallocPointer (&mallocPointer): %d\n", &mallocPointer);
    printf("Allocated memory address stored in mallocPointer (mallocPointer): %d\n", mallocPointer);
    printf("Contents of allocated memory address (*mallocPointer): ");
    printArray(mallocPointer, arraySize + 1);
    printf("\n");

    printf("\n");
    printf("Memory address of callocPointer (&callocPointer): %d\n", &callocPointer);
    printf("Allocated memory address stored in callocPointer (callocPointer): %d\n", callocPointer);
    printf("Contents of allocated memory address (*callocPointer): ");
    printArray(callocPointer, arraySize + 2);
    printf("\n");
    // Why are there six 0s? I only allocated 20 bytes, right?

    printf("\n");
    printf("Memory address of reallocPointer (&reallocPointer): %d\n", &reallocPointer);
    printf("Allocated memory address stored in reallocPointer (reallocPointer): %d\n", reallocPointer);
    printf("Contents of allocated memory address (*reallocPointer): ");
    printArray(reallocPointer, arraySize + 1);
    printf("\n");

    printf("\n");
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
    printf("\n[TESTING] ARRAY SIZE: %d\n", arraySize);
    int* arrayEnd = array + arraySize;
    while (array < arrayEnd) {
        printf("%d ", *array);
        array++;
    }
}