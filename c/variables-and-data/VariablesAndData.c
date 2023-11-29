#include <stdio.h>
int main() {
    int inputInt;
    int inputFactor;
    int initializeValueTest;

    printf("\n");
    printf("We will begin with an introductory test\n");
    printf("The value of an initial variable is %d\n", initializeValueTest);
    printf("Attempting to increment this variable...\n");
    initializeValueTest++;
    printf("This variable's value is now %d\n", initializeValueTest);
    printf("Now for your regularly scheduled programming (ha)...\n");
    printf("\n");
    printf("Please type a number: ");
    scanf("%d", &inputInt);
    printf("\n");
    printf("Your inputted number was %d\n", inputInt);
    printf("\n");
    printf("Please type a number to multiply this number with: ");
    scanf("%d", &inputFactor);
    printf("Your product is %d\n", inputInt * inputFactor);
    printf("\n");
    printf("Thank you for your participation. Goodbye!\n");
    printf("\n");
    return 0;
}