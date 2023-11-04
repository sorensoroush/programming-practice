#include <stdio.h>
#include <stdlib.h>

int main() {

    printf("\n");
    printf("Within main stack frame, initialize pointer to allocated memory within heap\n");

    printf("\n");
    printf("int* p = (int*) malloc(sizeof(int))\n");

    int* p = (int*) malloc(sizeof(int));  

    printf("\n");
    printf("Value of p: %d\n", p);  // Value of 
    printf("Value of &p: %d\n", &p);
    printf("Value of *p: %d\n", *p);

    printf("\n");
    printf("Assigning integer value to p via deferencing...\n");

    printf("\n");
    printf("*p = 100;\n");

    *p = 100;

    printf("\n");
    printf("Value of p: %d\n", p);
    printf("Value of &p: %d\n", &p);
    printf("Value of *p: %d\n", *p);

    printf("\n");
    printf("Freeing p from memory...\n");

    printf("\n");
    printf("free(p);\n");

    free(p);

    printf("\n");
    printf("Value of p: %d\n", p);
    printf("Value of &p: %d\n", &p);
    printf("Value of *p: %d\n", *p);
    printf("\n");

}