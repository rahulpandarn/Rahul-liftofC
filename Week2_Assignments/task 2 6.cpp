//Write a program to find maximum occurring integer in an array
#include <stdio.h>

#define MAX_SIZE 100

int find_max_occurrence(int arr[], int size) {
    int max_element = arr[0], max_count = 0;
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > max_count) {
            max_element = arr[i];
            max_count = count;
        }
    }
    return max_element;
}

int main() {
    int arr[MAX_SIZE];
    int size;

    // Input the array elements
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the maximum occurring integer in the array
    int max_occurrence = find_max_occurrence(arr, size);

    // Print the result
    printf("The maximum occurring integer in the array is %d.\n", max_occurrence);

    return 0;
}

