#include <stdio.h>

int main() {
    int emptyArray[] = {};
    int empty2DArray[][0] = {{}};
    int explicit2_3Array[2][3] = {{1,2,3},{4,5,6}};
    int explicit3_2Array[3][2] = {{1,2},{3,4},{5,6}};
    int implicit3_2Array[3][2] = {1,2,3,4,5,6};
    int implicit__2Array[][2] = {1,2,3,4,5,6};

    printf("\n");
    printf("Dereferencing once in a 2D array makes a pointer to the individual elements (ints)\n");
    printf("Incrementing pointer jumps to start of next array in array\n");
    printf("Jumps are by size of element; in this case it's 3 int * 4 bytes  = 12 bytes\n");
    printf("Address of explicit2_3Array: %d\n", explicit2_3Array);
    printf("Address of explicit2_3Array + 1: %d\n", explicit2_3Array + 1);
    printf("Address of *(explicit2_3Array) + 1: %d\n", *(explicit2_3Array) + 1);

    printf("\n");
    printf("In this case it's 2 int * 4 bytes  = 8 bytes\n");
    printf("Address of explicit3_2Array: %d\n", explicit3_2Array);
    printf("Address of explicit3_2Array + 1: %d\n", explicit3_2Array + 1);
    printf("Address of *(explicit3_2Array) + 1: %d\n", *(explicit3_2Array) + 1);

    printf("\n");
    printf("Testing for other array declarations (theortically identical to above)\n");
    printf("Address of implicit3_2Array: %d\n", implicit3_2Array);
    printf("Address of implicit3_2Array + 1: %d\n", implicit3_2Array + 1);
    printf("Address of *(implicit3_2Array) + 1: %d\n", *(implicit3_2Array) + 1);

    printf("\n");
    printf("Testing for other array declarations (theortically identical to above)\n");
    printf("Address of implicit__2Array: %d\n", implicit__2Array);
    printf("Address of implicit__2Array + 1: %d\n", implicit__2Array + 1);
    printf("Address of *(implicit__2Array) + 1: %d\n", *(implicit__2Array) + 1);
    printf("\n");
    
    printf("If dimensions specified = dimensions in array, value is referenced\n");
    printf("Value of explicit3_2Array[1][2]: %d\n", explicit3_2Array[1][2]);
    printf("\n");
}