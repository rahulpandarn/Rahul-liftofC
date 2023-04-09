//Take two array as input, merge them and print it in reverse order using loop
#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int arr1[MAX_SIZE], arr2[MAX_SIZE], merged_arr[MAX_SIZE * 2];
    int size1, size2, merged_size;

    // Input the first array
    printf("Enter the size of the first array: ");
    scanf("%d", &size1);
    printf("Enter the elements of the first array: ");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }

    // Input the second array
    printf("Enter the size of the second array: ");
    scanf("%d", &size2);
    printf("Enter the elements of the second array: ");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Merge the two arrays
    merged_size = size1 + size2;
    for (int i = 0; i < size1; i++) {
        merged_arr[i] = arr1[i];
    }
    for (int i = size1, j = 0; i < merged_size; i++, j++) {
        merged_arr[i] = arr2[j];
    }

    // Print the merged array in reverse order
    printf("The merged array in reverse order is:\n");
    for (int i = merged_size - 1; i >= 0; i--) {
        printf("%d ", merged_arr[i]);
    }
    printf("\n");

    return 0;
}


