//Write a C program to enter two numbers and perform all arithmethic operations using switch case.
#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    printf("\nEnter your choice:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f\n", num1, num2, result);
            break;
        case 3:
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f\n", num1, num2, result);
            }
            break;
        case 5:
            if (num2 == 0) {
                printf("Error: Modulus by zero\n");
            } else {
                result = (int)num1 % (int)num2;
                printf("%.2f %% %.2f = %.2f\n", num1, num2, result);
            }
            break;
        default:
            printf("Error: Invalid choice\n");
            break;
    }

    return 0;
}

