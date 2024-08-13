#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

   
    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

   
    if (choice < 1 || choice > 4) {
        printf("Invalid choice! Please enter a number between 1 and 4.\n");
        return 1; 
    }

   
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

  
    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case 4:
            if (num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Unexpected error!\n");
            break;
    }

    return 0;
}
