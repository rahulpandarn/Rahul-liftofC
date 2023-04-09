//Write a C program to print the following pattern using loop
#include <stdio.h>

int main() {
    int rows = 5;

    for(int i = 1; i <= rows; i++) {
        for(int j = rows; j >= i; j--) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

