#include <stdio.h>

int main() {
    // Area of Circle //

    float radius, area;

    printf("Enter radius: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    
    printf("Area = %.2f", area);

    return 0;
}