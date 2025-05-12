/*The length and breadth of a rectangle and radius of a circle are input through the keyboard. 
Write a Program to calculate the area and perimeter of the rectangle and circle */
#include<stdio.h>
int main(){

    float breadth, length , radius, area_rectangle, area_circle, perimeter, circumference;

    printf("Enter length and breadth of the Rectangle: ");
    scanf("%f %f",&length,&breadth);
    
    printf("\nEnter the radius of the Circle");
    scanf("%f",&radius);

    area_rectangle=length*breadth;
    perimeter=2*(length+breadth);
    area_circle= 3.14*radius*radius;
    circumference= 2*3.14*radius;

    printf("Area of Rectangle= %.2f\n",area_rectangle);
    printf("Perimeter of Rectangle= %.2f\n",perimeter);
    printf("Area of Circle= %.2f\n",area_circle);
    printf("Circumference of Circle= %.2f\n",circumference);

    return 0;
}
