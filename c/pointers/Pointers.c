#include <stdio.h>

int num;
int *numPointer;

int main() {
    printf("The current value for num: %d\n", num);
    printf("The current value for numPointer: %d\n", numPointer);
    // printf("The current value for numPointer's value: %d\n", *numPointer);
    printf("Type an integer value for num: ");
    scanf("%d", &num);
    printf("The current value for num: %d\n", num);
    printf("The current value for numPointer: %d\n", numPointer);
    printf("The current value for numPointer's value: %d\n", *numPointer);
}
