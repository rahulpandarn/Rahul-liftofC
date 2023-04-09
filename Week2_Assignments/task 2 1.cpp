//Write a C program to count the number of occurrences of a number in an array using function.
#include <stdio.h>

int count_occurrences(int arr[], int size, int num) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int my_array[] = {1, 2, 3, 4, 5, 5, 6, 7, 5};
    int my_number = 5;
    int array_size = sizeof(my_array) / sizeof(int);

    int occurrences = count_occurrences(my_array, array_size, my_number);
    printf("The number %d appears %d times in the array.\n", my_number, occurrences);

    return 0;
}

