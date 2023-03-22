//Write a C program that takes a number as input and prints the sum of its digits using a do-while loop.
#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    do {
        digit = num % 10;   
        sum += digit;       
        num /= 10;          
    } while (num != 0);     

    printf("The sum of the digits is: %d\n", sum);

    return 0;
}

