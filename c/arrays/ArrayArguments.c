#include <stdio.h>

void printArray(int arr[]);

int main() {

}

void printArray(int arr[]) {
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    for (int i = 0; i < arrSize; i++) {
        printf("Index %d: %d\n", i, arr[i]);
    }
}