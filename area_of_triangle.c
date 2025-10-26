#include <stdio.h>

int main() {
    // Area of Triangle //
    float base, height, area;

    printf("Enter the base: ");
    scanf("%f", &base);

    printf("Enter the height: ");
    scanf("%f", &height);

    area = 0.5 * base * height;

    printf("Area = %.2f", area);

    return 0;
}