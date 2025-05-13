/*WAP to find whether the area of rectangle is greater than its perimeter or not*/
#include<stdio.h>
int main(){
    float l, b;
    scanf("%f %f",&l,&b);
    float area, perimeter;
    area= l*b;
    perimeter= 2*(l+b);
    if (area>perimeter){
        printf("Area is Greater than Perimeter");    
    }
    else{
        printf("Area is not Greater than Perimeter");
    }
    return 0;
}