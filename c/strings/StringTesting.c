#include <stdio.h>
#include <string.h>

void printString(char str[]);

int main() {
    char inputStr[] = "";

    printf("\n");
    printf("Input a string: ");
    scanf("%s", inputStr);

    printf("\n");
    printf("The string you input: %s\n", inputStr);
    printf("The length of this string: %d\n", strlen(inputStr));
    printf("The byte size of this string: %d\n", sizeof(inputStr)); // This is confusing; it uses the initial size?
    printf("\n");

    printf("The string printed through a function:\n");
    printString(inputStr);
}

void printString(char str[]) {
    do {
        printf("%c\n", *str);
        str++;
    } while (*str != '\0');
    printf("\n");
}