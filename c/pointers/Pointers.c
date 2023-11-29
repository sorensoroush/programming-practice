#include <stdio.h>

int main() {

    printf("---------------\n");
    printf("\n");

    int num;
    int num2;

    int* numPointer = &num;
    int* num2Pointer = &num2;


    printf("num before assigning value (num): %d\n", num);
    printf("num2 before assigning value (num2): %d\n", num2);
    printf("\n");

    /*
    printf("Type an integer value for num: ");
    scanf("%d", &num);
    printf("Type an integer value for num2: ");
    scanf("%d", &num2);
    */

    num = 1;
    num2 = 5;

    printf("num after assigning value (num): %d\n", num);
    printf("num2 after assigning value (num2): %d\n", num2);
    printf("num's address (&num): %d\n", &num);
    printf("num2's address (&num2): %d\n", &num2);
    printf("numPointer (numPointer): %d\n", numPointer);
    printf("num2Pointer (num2Pointer): %d\n", num2Pointer);
    printf("numPointer's dereferenced value (*numPointer): %d\n", *numPointer);
    printf("num2Pointer's dereferenced value (*num2Pointer): %d\n", *num2Pointer);
    printf("numPointer's address (&numPointer): %d\n", &numPointer);
    printf("num2Pointer's address (&num2Pointer): %d\n", &num2Pointer);
    printf("\n");

    printf("\n");
    printf("Adding 1 to pointerNum...\n");
    printf("Adding 10 to pointerNum2...\n");

    numPointer += 1;
    num2Pointer += 10;

    printf("\n");
    printf("num (num): %d\n", num);
    printf("num2 (num2): %d\n", num2);
    printf("num's address (&num): %d\n", &num);
    printf("num2's address (&num2): %d\n", &num2);
    printf("numPointer (numPointer): %d\n", numPointer);
    printf("num2Pointer (num2Pointer): %d\n", num2Pointer);
    printf("numPointer's dereferenced value (*numPointer): %d\n", *numPointer);
    printf("num2Pointer's dereferenced value (*num2Pointer): %d\n", *num2Pointer);
    printf("numPointer's address (&numPointer): %d\n", &numPointer);
    printf("num2Pointer's address (&num2Pointer): %d\n", &num2Pointer);
    printf("\n");

    printf("---------------\n");
}