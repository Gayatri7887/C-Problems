#include <stdio.h>
#include <math.h>

int main() {
    int a;

    while (1) {

        printf("\n1. Factorial of a number\n");
        printf("2. Prime or not\n");
        printf("3. Odd or Even\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &a);

        switch (a) {
            case 1: {
                int n, fact = 1;
                printf("Enter a number: ");
                scanf("%d", &n);
                for (int i = 1; i <= n; i++) {
                    fact *= i;
                }
                printf("Factorial of %d = %d\n", n, fact);
                break;
            }

            case 2: {
                int n, isPrime = 1;
                printf("Enter a number: ");
                scanf("%d", &n);
                if (n <= 1) {
                    isPrime = 0;
                } else {
                    for (int i = 2; i <= sqrt(n); i++) {
                        if (n % i == 0) {
                            isPrime = 0;
                            break;
                        }
                    }
                }
                if (isPrime)
                    printf("%d is a Prime number\n", n);
                else
                    printf("%d is Not a Prime number\n", n);
                break;
            }

            case 3: {
                int n;
                printf("Enter a number: ");
                scanf("%d", &n);
                if (n % 2 == 0)
                    printf("%d is an Even number\n", n);
                else
                    printf("%d is an Odd number\n", n);
                break;
            }

            case 4:
                printf("Exited.\n");
                return 0;  // Exit the program

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
