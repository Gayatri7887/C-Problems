/*If a value of an angle is input through the key board, 
Write a program to print all its trigonometric Ratios*/
#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265

int main() {
    float deg, rad;
    printf("Enter angle in degrees: ");
    scanf("%f", &deg);

    rad = deg * (M_PI / 180.0);  // Convert degrees to radians

    printf("sine = %.4f\n", sin(rad));
    printf("cosine = %.4f\n", cos(rad));

    if (cos(rad) != 0)
        printf("tan = %.4f\n", tan(rad));
    else
        printf("tan is undefined (division by zero)\n");

    if (tan(rad) != 0)
        printf("cot = %.4f\n", 1.0 / tan(rad));
    else
        printf("cot is undefined (division by zero)\n");

    if (sin(rad) != 0)
        printf("cosec = %.4f\n", 1.0 / sin(rad));
    else
        printf("cosec is undefined (division by zero)\n");

    if (cos(rad) != 0)
        printf("sec = %.4f\n", 1.0 / cos(rad));
    else
        printf("sec is undefined (division by zero)\n");

    return 0;
}
