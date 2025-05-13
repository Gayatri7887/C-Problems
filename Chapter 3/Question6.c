/*If the ages of Ram, Shyam and Ajay are input through the keyboard. 
Write a program to determine the youngest of the three.*/
#include<stdio.h>

int main(){

    int ram, shyam, ajay;
    scanf("%d %d %d", &ram,&shyam,&ajay);

    if ((ram<shyam)&& (ram < ajay)){
        printf("Ram is youngest of all");}

    else if ((shyam<ram)&&(shyam<ajay)){
        printf("Shyam is youngest of all");}

    else{printf("Ajay is youngest of all");}

    return 0;
    
}