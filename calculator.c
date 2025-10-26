#include <stdio.h>

int main() {

    char operator;
    double num1, num2, result;

    printf("Enter an operator(+,-,*,/): ");
    scanf("%c", &operator);

    /* printf("Enter First number: ");
    scanf("%lf", &num1);

    printf("Enter Second number: ");
    scanf("%lf", &num2); */

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
        break;

    case '-':
        result = num1 - num2;
        printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
        break;

    case '*':
        result = num1 * num2;
        printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
        break;
        
    case '/':
        if (num2 != 0) {
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
        }   else {
            printf("Error\n");
        }
        break;
            
    
    default:
        printf("Error: Invalid operator\n");
        break;
    }

}