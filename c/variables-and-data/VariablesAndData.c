#include <stdio.h>
int main() {
    int input_int;
    int input_factor;

    printf("Please type a number: ");
    scanf("%d", &input_int);
    printf("Your inputted number was %d\n", input_int);
    printf("Please type a number to multiply this number with: ");
    scanf("%d", &input_factor);
    printf("Your product is %d\n", input_int * input_factor);
    printf("Thank you for your participation. Goodbye!\n");
    return 0;
}