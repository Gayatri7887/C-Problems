#include<stdio.h>

void primeFactors(int);

int main(){
    int a;
    scanf("%d",&a);
    primeFactors(a);
    return 0;
}

void primeFactors(int n) {
    
    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }   

    
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }

    
    if (n > 2)
        printf("%d", n);
}
