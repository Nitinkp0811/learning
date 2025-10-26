// Checking whether the number is prime or composite number
#include <stdio.h>

int main() {
    int n, prime = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0){
            prime = 1;
        }
    }

    if (prime){
        printf("%d is a composite number\n", n);
    }
    else{
        printf("%d is a prime number\n", n);
    }
    
    return 0;
}