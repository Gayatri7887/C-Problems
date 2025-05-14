/*If the three sides of a triangle are entered through the keyboard, 
write a program to check whether the triangle is valid or not.*/
#include<stdio.h>
int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    
    if ((a + b > c) && (b + c > a) && (a + c > b)) {
        printf("Triangle is valid");
    } else {
        printf("Triangle is not valid");
    }
        
    return 0;
}