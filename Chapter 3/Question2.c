/*Any integer is input through the keyboard. WAP to find out whether it is an odd no. or even no.*/
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if ((a%2)==0){
        printf("It is an Even Number.");
    }
    else{
        printf("It is an Odd Number.");
    }
    return 0;
}