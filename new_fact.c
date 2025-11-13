#include <stdio.h>

int main() {
    
    int i, n, fact = 1;

    printf("Enter Number: \n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial = %d", fact);
    
    return 0;
}