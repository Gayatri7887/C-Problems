#include <stdio.h>

void primeFactors(int n);

int main() {
    int n;
    scanf("%d", &n);
    primeFactors(n);
    return 0;
}

void primeFactors(int n) {
    if (n <= 1) {
        printf("No prime factors.\n");
        return;
    }

    // Handle factor 2 separately
    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }

    // Handle odd factors
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        printf("%d", n);
    }
}
