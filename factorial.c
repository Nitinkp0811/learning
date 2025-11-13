#include <stdio.h>

int main() {
    
    int i, n;
    long long fact = 1;

    printf("Enter Number: \n");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial of negative number doesn't exist.");
    }

    else{
        for (int i = 1; i <= n; i++)
        fact = fact * i;
    }
    
    printf("Factorial of %d = %lld", n, fact);
    
    return 0;
}
