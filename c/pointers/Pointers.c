#include <stdio.h>

int main() {
    int num;
    int *numPointer = &num;

    printf("\n");
    printf("The current value for num: %d\n", num);
    printf("The current value for numPointer: %d\n", numPointer);
    printf("The current value for numPointer's value: %d\n", *numPointer);
    printf("\n");
    printf("Type an integer value for num: ");
    scanf("%d", &num);
    printf("\n");
    printf("The current value for num: %d\n", num);
    printf("The current value for numPointer: %d\n", numPointer);
    printf("The current value for numPointer's value: %d\n", *numPointer);
    printf("\n");
}
