// Write a C program to count the frequency of each character of the string
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void count_frequency(char *str) {
    int freq[256] = {0};
    int i;
    int len = strlen(str);
    for (i = 0; i < len; i++) {
        freq[str[i]]++;
    }
    printf("Character frequencies:\n");
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            printf("%c: %d\n", i, freq[i]);
        }
    }
}

int main() {
    char str[MAX_SIZE];
    printf("Enter a string: ");
    fgets(str, MAX_SIZE, stdin);
    count_frequency(str);
    return 0;
}

