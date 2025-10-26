// Checking whether the number is prime or composite number
#include <stdio.h>

int main() {
    int n, not_prime = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0 && n != 2){
            not_prime = 1;
            break;
        }
    }

    if (not_prime){
        printf("%d is a composite number\n", n);
    }
    else{
        printf("%d is a prime number\n", n);
    }
    
    return 0;

}
