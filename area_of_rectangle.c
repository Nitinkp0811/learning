#include <stdio.h>

int main() {
    // Area of Rectangle //
    float l, b, area;

    printf("Enter the length: ");
    scanf("%f", &l);

    printf("Enter the breadth: ");
    scanf("%f", &b);

    area = l * b;

    printf("Area = %.2f", area);

    return 0;
}