/*Consider a Currency system in which there are notes of seven denominations, namely,
 Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a sum of Rs. N is entered through the keyboard, 
 write a program to compute the smallest number of notes that will combine to give the rs. N. */
 #include <stdio.h>
int main() {
    int N;
    int hundred, fifty, ten, five, two, one;
    printf("Enter the amount in Rs: ");
    scanf("%d", &N);

    hundred = N / 100;
    N = N % 100;

    fifty = N / 50;
    N = N % 50;

    ten = N / 10;
    N = N % 10;

    five = N / 5;
    N = N % 5;

    two = N / 2;
    N = N % 2;

    one = N;

    printf("\nMinimum number of notes:\n");
    if (hundred > 0) printf("Rs. 100: %d\n", hundred);
    if (fifty > 0)  printf("Rs. 50: %d\n", fifty);
    if (ten > 0)    printf("Rs. 10: %d\n", ten);
    if (five > 0)   printf("Rs. 5: %d\n", five);
    if (two > 0)    printf("Rs. 2: %d\n", two);
    if (one > 0)    printf("Re. 1: %d\n", one);
    return 0;
}
