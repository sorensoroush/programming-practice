#include <stdio.h>
#include <string.h>

void printString(char str[]);

int main() {
    char inputStr[] = "Test";
    char junkStr[20];
    junkStr[0] = 'J';
    junkStr[1] = 'u';
    junkStr[2] = 'n';
    junkStr[3] = 'k';
    junkStr[4] = ':';
    junkStr[5] = ' ';
    // junkStr[6] = '\0';

    printf("\n");
    printf("Contents of inputStr: %s\n", inputStr);
    printf("Length of inputStr: %d\n", strlen(inputStr));
    printf("Byte length of inputStr: %d\n", sizeof(inputStr));
    printf("Contents of junkStr: %s\n", junkStr);
    printf("Length of junkStr: %d\n", strlen(junkStr));
    printf("Byte length of junkStr: %d\n", sizeof(junkStr));

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