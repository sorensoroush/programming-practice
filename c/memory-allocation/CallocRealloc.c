#include <stdio.h>
#include <stdlib.h>

int main() {
    int* mallocArray = malloc(5 * sizeof(int));
    printf("%d", mallocArray);
}