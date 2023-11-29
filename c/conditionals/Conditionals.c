#include <stdio.h>
int main() {
    printf("Testing various truth values in C:\n");
    printf("3 & 2: %d\n", 3 && 2);
    printf("0 || -1: %d\n", 0 || -1);
    printf("Positive number: %d\n", !!3);
    printf("Zero: %d\n", !!0);
    printf("Negative number: %d\n", !!-3);
    printf("String: %d\n", !!"Something");
    printf("Empty string: %d\n", !!"");
    printf("Char: %d\n", !!'X');
    return 0;
}