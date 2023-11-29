#include <stdio.h>
int main() {
    char c;
    char *p = &c;

    printf("\n");
    printf("Value of c (int): %d\n", c);
    printf("Value of c (char): %c\n", c);
    printf("Value of p (int): %d\n", p);
    printf("Value of p (memory address): %p\n", p);
    printf("Value of p (deference): %d\n", *p);

    printf("\n");
    printf("Please enter a single character value for c: ");
    scanf("%c", &c);
    printf("\n");

    printf("Value of c (int): %d\n", c);
    printf("Value of c (char): %c\n", c);
    printf("Value of p (int): %d\n", p);
    printf("Value of p (memory address): %p\n", p);
    printf("Value of p (deference): %d\n", *p);

    printf("\n");
    printf("Adding 1 to the value of c...");
    printf("\n");

    printf("Value of c (int): %d\n", c);
    printf("Value of c (char): %c\n", c);
    printf("Value of p (int): %d\n", p);
    printf("Value of p (memory address): %p\n", p);
    printf("Value of p (deference): %d\n", *p);

    printf("\n");
    printf("Adding 1 to the value of p...");
    printf("\n");

    printf("Value of c (int): %d\n", c);
    printf("Value of c (char): %c\n", c);
    printf("Value of p (int): %d\n", p);
    printf("Value of p (memory address): %p\n", p);
    printf("Value of p (deference): %d\n", *p);
    printf("\n");
}