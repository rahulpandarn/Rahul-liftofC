//Write a C program to print the following pattern using loop 
#include <stdio.h>

int main() {
    int num = 1;

    // Loop through each row
    for (int i = 1; i <= 5; i++) {

        // Loop through each column in the row
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;
        }

        // Move to the next row
        printf("\n");
    }

    return 0;
}

