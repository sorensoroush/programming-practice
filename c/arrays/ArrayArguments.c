#include <stdio.h>

void printArray(int array[], int size);

int main() {
    int numArray[] = {2,3,4,5,6};
    int numArraySize = sizeof(numArray)/sizeof(numArray[0]);
    printArray(numArray, numArraySize);
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("Index %d: %d\n", i, array[i]);
    }
}