//Write a C program to find the factorial of a number using pointers.
#include <stdio.h>

void find_factorial(int n, int *result) {
    int i;
    *result = 1;
    for (i = 1; i <= n; i++) {
        *result *= i;
    }
}

int main() {
    int num, factorial;
    printf("Enter a number: ");
    scanf("%d", &num);
    find_factorial(num, &factorial);
    printf("The factorial of %d is %d\n", num, factorial);
    return 0;
}

