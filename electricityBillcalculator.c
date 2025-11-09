// Electricity Bill Calculator

#include <stdio.h>

// Function to calculate electricity bill
float calculateBill(int units) {
    float bill;

    if (units <= 100) {
        bill = units * 1.5;
    }
    else if (units <= 200) {
        bill = 100 * 1.5 + (units - 100) * 2.5;
    }
    else {
        bill = 100 * 1.5 + 100 * 2.5 + (units - 200) * 4.0;
    }

    return bill;
}

int main() {
    int units;
    printf("Enter electricity units consumed: ");
    scanf("%d", &units);

    // Check for invalid input
    if (units < 0) {
        printf("Invalid input! Units cannot be negative.\n");
    } else {
        float totalBill = calculateBill(units);
        printf("Total Electricity Bill = %.2f\n", totalBill);
    }

    return 0;
}