/*Write a Program to find the area of a triange if three sides of a triangle are given.*/

#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float s,area;
    s=(a+b+c)/2; 
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area= %.2f",area);
    return 0;
}