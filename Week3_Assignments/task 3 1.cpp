//Write a C program to remove a specific character from a string
#include <stdio.h>
#include <string.h>

void remove_char(char *str, char c) {
    int len = strlen(str);
    int i, j;
    for (i = 0, j = 0; i < len; i++) {
        if (str[i] != c) {
            str[j] = str[i];
            j++;
        }
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    char c;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    printf("Enter a character to remove: ");
    scanf("%c", &c);
    remove_char(str, c);
    printf("Modified string: %s\n", str);
    return 0;
}

