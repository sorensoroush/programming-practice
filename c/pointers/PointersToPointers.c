#include <stdio.h>

int main() {
    int a;
    int* b = &a;
    int** c = &b;
    int*** d = &c;

    printf("\n");
    printf("We have a chain of pointers: d => c => b => a \n");
    printf("\n");

    printf("Input an integer value for a: ");
    scanf("%d", &a);

    printf("\n");
    printf("Value of a: %d\n", a);
    printf("Address of a: %d\n", &a);
    printf("Value of b: %d\n", b);
    printf("Address of b: %d\n", &b);
    printf("Value of c: %d\n", c);
    printf("Address of c: %d\n", &c);
    printf("Value of d: %d\n", d);
    printf("Address of d: %d\n", &d);
    printf("Value of 1 deferences from d: %d\n", *d);
    printf("Value of 2 deferences from d: %d\n", **d);
    printf("Value of 3 deferences from d: %d\n", ***d);
    printf("\n");
}