#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+,-,*,/,%,^): ");
    scanf(" %c ", &operator);

    if(operator == '^') {
        num2 = pow(num1, 2.0);
    } else {
        switch (operator) {
            case '+':
                num2 = num1 + num1;
                break;
            case '-':
                num2 = num1 - num1;
                break;
            case '*':
                num2 = num1 * num1;
                break;
            case '/':
                if(num1 != 0) {
                    num2 = num1 / num1;
                } else {
                    printf("Error! Division by zero is not allowed.");
                    return 1;
                }
                break;
            case '%':
                if(num1 != 0) {
                    num2 = fmod(num1, num1);
                } else {
                    printf("Error! Division by zero is not allowed.");
                    return 1;
                }
                break;
            default:
                printf("Invalid operator!");
                return 1;
        }
    }

    printf("Enter the second number: ");
    scanf("%lf", &num2);

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
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            break;
        case '%':
            printf("%.2lf %% %.2lf = %.2lf\n", num1, num2, fmod(num1, num2));
            break;
        default:
            printf("Invalid operator!");
    }

    return 0;
}