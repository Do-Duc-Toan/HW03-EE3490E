#include <stdio.h>

int checkprime(int num, int i) { // i=num/2
    if (i == 1) {   
        return 1;  // Base case: number is prime
    } 
    else {
        if (num % i == 0) {
            return 0;  // Base case: number is not prime
        } 
        else {
            return checkprime(num, i - 1);  // Recursive case: check next divisor
        }
    }
}

void findPrimes(int n, int num) {
    if (n == 0) {
        return;  // Base case: found 'n' primes
    }
    else {
        if (checkprime(num, num/2)) {
            printf("%d ", num);  // Print the prime number
            findPrimes(n - 1, num + 1);  // Recursive case: find next prime
        } 
        else {
            findPrimes(n, num + 1);  // Recursive case: check next number
        }
    }
}

int main() {
    int n;
    printf("Enter n = ");
    scanf("%d", &n);
    printf("The first %d prime numbers are: ", n);
    findPrimes(n, 2);
    return 0;
}