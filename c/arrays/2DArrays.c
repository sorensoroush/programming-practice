#include <stdio.h>

int main() {
    int emptyArray[] = {};
    int empty2DArray[][0] = {{}};
    int explicit3_2Array[3][2] = {{1,2},{3,4},{5,6}};
    int implicit3_2Array[3][2] = {1,2,3,4,5,6};
    int implicit__2Array[][2] = {1,2,3,4,5,6};

    printf("\n");
    printf("Value of emptyArray: %d\n", emptyArray);
    printf("Value of *emptyArray: %d\n", *emptyArray);
    printf("Value of emptyArray + 1: %d\n", emptyArray + 1);
    printf("Value of *emptyArray + 1: %d\n", *emptyArray + 1);
    printf("\n");
}