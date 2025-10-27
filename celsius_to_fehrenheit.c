// Function to convert degree celsius into degree ferhenheit
// Degree Fehrenheit = (Degree Celsius * 9 / 5) + 32
#include <stdio.h>

// Function prototype
float celsiusTofehrenheit(float);

// Function definition
float celsiusTofehrenheit(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float celsius, fehrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fehrenheit = celsiusTofehrenheit(celsius);

    printf("Temperature in Fehrenheit is %.2f\n", fehrenheit);

    return 0;
}