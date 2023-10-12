#include <stdio.h>
int main() {
    char c;
    char *p = &c;

    printf("\n");
    printf("Value of c: %d\n", c);
    printf("Value of p: %d\n", p);

    printf("\n");
    printf("Please enter a single character value for c: ");
    scanf("%c", &c);
    printf("\n");

    printf("Value of c: %d\n", c);
    printf("Value of p: %d\n", p);

    printf("\n");
    printf("Adding 1 to the value of c...");
    printf("\n");

    printf("Value of c: %d\n", c);
    printf("Value of p: %d\n", p);
    printf("Value of p's value: %d\n", *p);

    printf("\n");
    printf("Adding 1 to the value of p...");
    printf("\n");

    printf("Value of c: %d\n", c);
    printf("Value of p: %d\n", p);
    printf("Value of p's value: %d\n", *p);
    printf("\n");

    // I don't really understand other data types in C...
}