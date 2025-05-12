/*Write a program to receive value of latitude (L1,L2) and longitude(G1,G2), in degrees,
of two places on the earth and output the distance D between them in nautical miles*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159265

float toRadians(float degree) {
    return degree * (PI / 180.0);
}

int main() {
    float L1, L2, G1, G2;
    float D;

    printf("Enter latitude and longitude of first location (L1 G1): ");
    scanf("%f %f", &L1, &G1);

    printf("Enter latitude and longitude of second location (L2 G2): ");
    scanf("%f %f", &L2, &G2);

    L1 = toRadians(L1);
    L2 = toRadians(L2);
    G1 = toRadians(G1);
    G2 = toRadians(G2);

    // Distance in statute miles
    D = 3963 * acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos(G2 - G1));

    // Convert to nautical miles
    D = D / 1.15078;

    printf("Distance between the two places = %.2f nautical miles\n", D);

    return 0;
}
