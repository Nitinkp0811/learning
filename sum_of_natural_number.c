#include <stdio.h>

int main() {
    /* int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("The sum first ten natural number is %d", sum); */

    int n, sum;
    printf("Enter number of natural numbers: ");
    scanf("%d", &n);

    sum = (n * (n + 1)) / 2;

    printf("Sum of natural number is %d", sum);

    return 0;
}