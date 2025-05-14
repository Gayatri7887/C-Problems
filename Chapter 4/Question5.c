#include <stdio.h>
int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && b + c > a && a + c > b) {

        if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b)) {
            printf("Right-angled Triangle\n");
        }
        else if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        }
        else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        }
        else {
            printf("Scalene Triangle\n");
        }

    } else {
        printf("Invalid triangle: The sides do not satisfy the triangle inequality.\n");
    }

    return 0;
}
