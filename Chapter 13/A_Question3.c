#include <stdio.h>
#include <math.h>

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int arr[100];
    for (int i = 0; i < 100; i++) {
        arr[i] = i + 1;
    }

    printf("Primes from 1 to 100:\n");
    for (int i = 0; i < 100; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}
