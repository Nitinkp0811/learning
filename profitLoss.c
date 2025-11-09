// Profit or Loss Calculator

#include <stdio.h>

void profitLoss(float, float);

void profitLoss(float cost, float sell) {
    if (sell > cost)
    {
        printf("Profit = %.2f", sell - cost);
    }

    else if (cost > sell)
    {
        printf("Loss = %.2f", cost - sell);
    }

    else if (cost == sell)
    {
        printf("No profit, No loss");
    }
    
}

int main() {
    
    float cost, sell;

    printf("Enter cost price: \n");
    scanf("%f", &cost);

    printf("Enter selling price: \n");
    scanf("%f", &sell);

    profitLoss(cost, sell);

    return 0;
}