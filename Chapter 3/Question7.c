/*WAP to check if the triangle is valid or not*/
#include<stdio.h>

int main(){

    float a, b, c;
    scanf("%f %f %f", &a,&b,&c);
    
    float sum = a+b+c;

    if (sum==180) printf("Triangle is valid");
    else printf("Triangle is not valid");

    return 0;
}