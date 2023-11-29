#include <stdio.h>

int numToSquare;
int squareNum (int num);

int main() {
    printf("Please type a number you would like to square: ");
    scanf("%d", &numToSquare);
    printf("Your squared number is %d!", squareNum(numToSquare));
}

int squareNum (int num) {
    return num * num;
}