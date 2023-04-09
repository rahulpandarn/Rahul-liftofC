//Write a program to move all the negative elements to one side of the array.
#include <stdio.h>

void moveNegativeElements(int arr[], int n) {
    int j = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] < 0) {
            if(i != j) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
    }
}

int main() {
    int arr[] = {2, 5, -1, 0, -3, 8, -6};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Original Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    moveNegativeElements(arr, n);

    printf("\nArray after moving negative elements to one side: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

