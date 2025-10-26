// Sum of two numbes
#include <stdio.h>

int main() {

    float num1, num2, sum;

    printf("Enter First number: ");
    scanf("%f", &num1);

    printf("Enter Second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;

    printf("Sum = %.2f", sum);

    return 0;
}