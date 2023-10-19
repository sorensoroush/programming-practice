#include <stdio.h>

void IntDouble(int num);
void IntDoubleFromPointer(int* num);

int main() {
    int numToDouble;
    int* numPointer = &numToDouble;

    printf("\n");
    printf("Type an integer to double: ");
    scanf("%d", &numToDouble);
    printf("The number you have typed is: %d\n", numToDouble);

    printf("\n");
    printf("Attempting to double number via call by value...\n");
    IntDouble(numToDouble);
    printf("Doubled number: %d\n", numToDouble);

    printf("\n");
    printf("Attempting to double number via call by reference...\n");
    IntDoubleFromPointer(numPointer);
    printf("Doubled number: %d\n", numToDouble);
    printf("\n");
}

// Call by value
void IntDouble(int num) {
    num *= 2;
}

// Call by reference
void IntDoubleFromPointer(int* num) {
    *num *= 2;
}