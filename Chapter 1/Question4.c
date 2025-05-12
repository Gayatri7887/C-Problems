/*fahrenheit to celcius degree*/
#include<stdio.h>
int main(){
    float temp_f, temp_c;
    scanf("%f",&temp_f);
    temp_c= (temp_f - 32) * 5/9;
    printf("%.2f",temp_c);
    return 0;
}