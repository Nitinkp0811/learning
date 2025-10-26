// Simple Interest
#include <stdio.h>

int main() {

    float p, t, r, si;

    printf("Enter principle amount: ");
    scanf("%f", &p);

    printf("Enter time period: ");
    scanf("%f", &t);

    printf("Enter rate: ");
    scanf("%f", &r);

    si = (p * r * t) / 100;

    printf("SI = %.2f", si);

    return 0;
}