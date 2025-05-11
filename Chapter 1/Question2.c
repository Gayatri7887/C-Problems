/*The distance between the two cities (in km.) is input through the keyboard. Write a program to convert and print this distance in meters, feet, inches, and centimeters.*/
#include <stdio.h>
int main(){
    float distance, meters, feet, inches, centimeters;
    printf("Enter distance in km:");
    scanf("%f",&distance);
    meters= distance*1000;
    feet = distance *3280.84;
    inches= distance*39370.1;
    centimeters= distance*100000;
    printf("Distance in meters=%.2f\n",meters);
    printf("Distance in feet=%.2f\n",feet);
    printf("Distance in inches=%.2f\n",inches);
    printf("Distance in centimeters=%.2f\n",centimeters);
}