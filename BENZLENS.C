#include <stdio.h>

int main() {
    char operator;
    double num1, num2;

    // Ask user for input
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Space before %c to handle any leftover newline character

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform the corresponding operation
    switch (operator) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Error! Division by zero.\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
    getch();
}
