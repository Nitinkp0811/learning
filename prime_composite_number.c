// Checking whether the number is prime or composite.
#include <stdio.h>

int main() {
    int n, not_prime = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1){
        printf("%d is not a prime number nor a composite number. ", n);
    }
    else{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && n != 2){
            not_prime = 1;
        }
    }

    if (not_prime){
        printf("%d is a composite number\n", n);
    }
    else{
        printf("%d is a prime number\n", n);
    }
}
    
    return 0;
}