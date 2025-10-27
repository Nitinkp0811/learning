// To find average of n number of terms
// Average = Sum of all terms / Total number of terms (n) 
#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0, average;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%f", &num);
        sum += num;
    }
    
    average = sum / n;

    printf("Average = %.2f", average);

    return 0;
}