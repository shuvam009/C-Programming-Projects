#include <stdio.h>

int main() {
    double a, b, result;
    int choice;

    do
    {
    printf("Enter first number: ");
    if (scanf("%lf", &a) != 1) return 1;
    printf("Enter second number: ");
    if (scanf("%lf", &b) != 1) return 1;

    printf("\nChoose operation:\n");
    printf("1) Addition (+)\n2) Subtraction (-)\n3) Multiplication (*)\n4) Division (/)\n");
    printf("Enter choice (1-4): ");
    if (scanf("%d", &choice) != 1) return 1;

    switch (choice) {
        case 1:
            result = a + b;
            printf("Result: %.6g\n\n", result);
            break;
        case 2:
            result = a - b;
            printf("Result: %.6g\n\n", result);
            break;
        case 3:
            result = a * b;
            printf("Result: %.6g\n\n", result);
            break;
        case 4:
            if (b == 0) {
                printf("Error: Division by zero is not allowed.\n");
            } else {
                result = a / b;
                printf("Result: %.6g\n\n", result);
            }
            break;
        default:
            printf("Invalid choice.\n");
        }
    }while(choice!=4);

}