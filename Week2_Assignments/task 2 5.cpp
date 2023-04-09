//. Write a C program to copy the elements of one array into another array
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int source[MAX_SIZE], destination[MAX_SIZE];
    int size;

    // Input the array elements
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &source[i]);
    }

    // Copy the array elements to the destination array
    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }

    // Print the copied array
    printf("The copied array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", destination[i]);
    }
    printf("\n");

    return 0;
}

