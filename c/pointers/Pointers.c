#include <stdio.h>

int main() {
    /* 
    Two variables are declared and tested here because
    if only one variable is declared it will have a default value of 0
    yet if two variables are declared they will have default values of random large integers
    */

    int num;
    int num2;

    printf("\n");
    printf("The current value for num before pointing to it: %d\n", num);
    printf("The current value for num2 before pointing to it: %d\n", num2);

    int *numPointer = &num;
    int *numPointer2 = &num2;

    printf("\n");
    printf("The current value for num after pointing to it: %d\n", num);
    printf("The current value for num2 before pointing to it: %d\n", num2);
    printf("The current value for numPointer: %d\n", numPointer);
    printf("The current value for numPointer2: %d\n", numPointer2);
    printf("The current value for numPointer's value: %d\n", *numPointer);
    printf("The current value for numPointer2's value: %d\n", *numPointer2);

    printf("\n");
    printf("Type an integer value for num: ");
    scanf("%d", &num);
    printf("Type an integer value for num2: ");
    scanf("%d", &num2);
    printf("\n");

    printf("The current value for num: %d\n", num);
    printf("The current value for num2: %d\n", num2);
    printf("The current value for numPointer: %d\n", numPointer);
    printf("The current value for numPointer2: %d\n", numPointer2);
    printf("The current value for numPointer's value: %d\n", *numPointer);
    printf("The current value for numPointer2's value: %d\n", *numPointer2);

    printf("\n");
    printf("Attempting adding 1 to pointerNum...\n");
    printf("Attempting adding 10 to pointerNum2...\n");
    printf("\n");

    numPointer += 1;
    numPointer2 += 11;

    printf("The current value for num: %d\n", num);
    printf("The current value for num2: %d\n", num2);
    printf("The current value for numPointer: %d\n", numPointer);
    printf("The current value for numPointer2: %d\n", numPointer2);
    printf("The current value for numPointer's value: %d\n", *numPointer);
    printf("The current value for numPointer2's value: %d\n", *numPointer2);
    printf("\n");
}