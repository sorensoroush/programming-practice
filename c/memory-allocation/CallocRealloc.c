#include <stdio.h>
#include <stdlib.h>

void printArray(int array[], int size);
void writeArray(int arrayCopy[], int arrayPaste[], int size);

int main() {
    int arraySize = 5;

    printf("\n");
    printf("Values to be written at mallocPointer address: [0,1,2,3,4]\n");
    printf("Values to be written at callocPointer address: [5,6,7,8,9]\n");

    int mallocArray[] = {0,1,2,3,4};
    int callocArray[] = {5,6,7,8,9};

    int* mallocPointer = malloc(arraySize * sizeof(int));
    int* callocPointer = calloc(arraySize, sizeof(int));

    printf("\n");
    printf("Allocated memory address stored in mallocPointer (mallocPointer): %d\n", mallocPointer);
    printf("Contents of allocated memory address (*mallocPointer): ");
    printArray(mallocPointer, arraySize);

    printf("\n");
    printf("Allocated memory address stored in callocPointer (callocPointer): %d\n", callocPointer);
    printf("Contents of allocated memory address (*callocPointer): ");
    printArray(callocPointer, arraySize);
    // It seems calloc() zeroes out an extra byte, not sure why this happens

    printf("\n");
    printf("Procedurally writing values to allocated pointers...\n");

    writeArray(mallocArray, mallocPointer, arraySize);
    writeArray(callocArray, callocPointer, arraySize);

    printf("\n");
    printf("Allocated memory address stored in mallocPointer (mallocPointer): %d\n", mallocPointer);
    printf("Contents of allocated memory address (*mallocPointer): ");
    printArray(mallocPointer, arraySize);

    printf("\n");
    printf("Allocated memory address stored in callocPointer (callocPointer): %d\n", callocPointer);
    printf("Contents of allocated memory address (*callocPointer): ");
    printArray(callocPointer, arraySize);

    printf("\n");
    printf("Reallocating contents of mallocPointer...\n");

    int* reallocPointer = realloc(mallocPointer, 2 * arraySize * sizeof(int));

    printf("\n");
    printf("Allocated memory address stored in mallocPointer (mallocPointer): %d\n", mallocPointer);
    printf("Contents of allocated memory address (*mallocPointer): ");
    printArray(mallocPointer, arraySize);

    printf("\n");
    printf("Allocated memory address stored in callocPointer (callocPointer): %d\n", callocPointer);
    printf("Contents of allocated memory address (*callocPointer): ");
    printArray(callocPointer, arraySize);

    printf("\n");
    printf("Allocated memory address stored in reallocPointer (reallocPointer): %d\n", reallocPointer);
    printf("Contents of allocated memory address (*reallocPointer): ");
    printArray(reallocPointer, arraySize * 2);

    printf("\n");
    printf("Notice how the values of mallocPointer were copied\n");
    printf("Procedurally copying values of callocPointer to second half of reallocPointer's memory...\n");

    writeArray(callocPointer, reallocPointer + arraySize, arraySize);

    printf("\n");
    printf("Allocated memory address stored in mallocPointer (mallocPointer): %d\n", mallocPointer);
    printf("Contents of allocated memory address (*mallocPointer): ");
    printArray(mallocPointer, arraySize);

    printf("\n");
    printf("Allocated memory address stored in callocPointer (callocPointer): %d\n", callocPointer);
    printf("Contents of allocated memory address (*callocPointer): ");
    printArray(callocPointer, arraySize);

    printf("\n");
    printf("Allocated memory address stored in reallocPointer (reallocPointer): %d\n", reallocPointer);
    printf("Contents of allocated memory address (*reallocPointer): ");
    printArray(reallocPointer, arraySize * 2);

    printf("\n");
    printf("Freeing all three pointers...\n");

    free(mallocPointer);
    free(callocPointer);
    free(reallocPointer);

    printf("\n");
    printf("Allocated memory address stored in mallocPointer (mallocPointer): %d\n", mallocPointer);
    printf("Contents of allocated memory address (*mallocPointer): ");
    printArray(mallocPointer, arraySize);

    printf("\n");
    printf("Allocated memory address stored in callocPointer (callocPointer): %d\n", callocPointer);
    printf("Contents of allocated memory address (*callocPointer): ");
    printArray(callocPointer, arraySize);

    printf("\n");
    printf("Allocated memory address stored in reallocPointer (reallocPointer): %d\n", reallocPointer);
    printf("Contents of allocated memory address (*reallocPointer): ");
    printArray(reallocPointer, arraySize * 2);
    printf("\n");

    /*
    Initialize two arrays
    Specify these are values to be written, not array to copy
    Initialize three pointers: malloc, calloc
        Allocate memory using appropriate command
    Print pointer, pointer's address, and deferenced content 
    Write contents of array to allocated memory
    Print pointer, pointer's address, and deferenced content 
    Free allocated contents
    Print pointer, pointer's address, and deferenced content 
    */
}

void printArray(int* arrayStart, int size) {
    // printf("\n[TESTING] ARRAY SIZE: %d\n", arraySize);
    int* arrayEnd = arrayStart + size;
    while (arrayStart < arrayEnd) {
        printf("%d ", *arrayStart);
        arrayStart++;
    }
    printf("\n");
}

void writeArray(int* arrayCopy, int* arrayPaste, int size) {
    int* arrayEnd = arrayCopy + size;
    while (arrayCopy < arrayEnd) {
        *arrayPaste = *arrayCopy;
        arrayCopy++;
        arrayPaste++;
    }
}
