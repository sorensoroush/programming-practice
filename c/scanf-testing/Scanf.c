#include <stdio.h>

int main() {
    char c;
    int n;
    printf("Supposed memory address of undefined n: %d\n", n);
    /*
    printf("Type a character followed by 'testing ': ");
    scanf("testing %c", &c);
    printf("You have typed: %c\n", c);
    */
    printf("Try typing an integer (or not): ");
    scanf("%d", &n);
    printf("You have typed: %d", n);
    return 0;
}