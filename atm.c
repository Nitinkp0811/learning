// ATM
#include <stdio.h>

int main() {
    int choice;
    float balance = 10000.0, amount;

    while (1) {
        printf("\n========== ATM MENU ==========\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("==============================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nYour current balance is: %.2f\n", balance);
                break;

            case 2:
                printf("\nEnter amount to deposit: ");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("%.2f deposited successfully!\n", amount);
                } else {
                    printf("Invalid deposit amount!\n");
                }
                break;

            case 3:
                printf("\nEnter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("%.2f withdrawn successfully!\n", amount);
                } else if (amount > balance) {
                    printf("Insufficient balance!\n");
                } else {
                    printf("Invalid withdrawal amount!\n");
                }
                break;

            case 4:
                printf("\nThank you for using our ATM!\n");
                return 0;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }
    }

    return 0;
}