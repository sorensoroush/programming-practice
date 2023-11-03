#include <stdio.h>
#include <stdlib.h>

int main() {

    // Within main stack frame, initialize pointer to allocated memory within heap
    int* p = (int*) malloc(sizeof(int));  

    printf("\n");
    printf("Value of p: %d\n", p);  // Value of 
    printf("Value of &p: %d\n", &p);
    printf("Value of *p: %d\n", *p);

    printf("\n");
    printf("Assigning integer value to p via deferencing...\n");

    *p = 100;

    printf("\n");
    printf("Value of p: %d\n", p);
    printf("Value of &p: %d\n", &p);
    printf("Value of *p: %d\n", *p);

    printf("\n");
    printf("Freeing p from memory...\n");

    free(p);

    printf("\n");
    printf("Value of p: %d\n", p);
    printf("Value of &p: %d\n", &p);
    printf("Value of *p: %d\n", *p);
    printf("\n");

}