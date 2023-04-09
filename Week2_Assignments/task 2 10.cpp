//Write a program to find the total number of alphabets , digits and special characters in a string
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int alphabets = 0, digits = 0, special = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        if(isalpha(str[i])) {
            alphabets++;
        }
        else if(isdigit(str[i])) {
            digits++;
        }
        else {
            special++;
        }
    }

    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of special characters: %d\n", special);

    return 0;
}

