// To find whether the number is Palindrome number or not.

#include <stdio.h>

int main() {
    int n, rem, rev = 0, original;

    printf("Enter number: ");
    scanf("%d", &n);

    original = n; // Store the original value of n

    while (n > 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10; // n = n /10
    }

    // If n = 123
    // First loop 
    // rem = 3 because remainder of 123 / 10 is 3.
    // Initially, rev = 0, so rev = rev * 10 + rem becomes 0 * 10 + 3 = 3.
    // Second loop
    // Now, n = 12
    // rem = 2 because remainder of 12 /10 is 2.
    // Now, rev = 3, so rev = 3 * 10 + 2 = 32.
    // Third loop
    // Now, n = 1
    // rem = 1 because n is not divisible by 10.
    // Now, rev = 32, so rev = 32 * 10 + 1 = 321.
    // Now, n becomes 0, so the loop stops.
    // The number is 321.

    if (rev == original)
    {
        printf("True\n");
    }
    else {
        printf("False");
    }
    
    return 0;

}
