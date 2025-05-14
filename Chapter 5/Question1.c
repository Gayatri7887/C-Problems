#include<stdio.h>
int main(){
    int hours;
    
    for ( int i = 1 ; i<=10; i++){
    
    scanf("%d",&hours);
    if(hours>40){
    int hours_worked= hours-40;

    float overtime_pay= hours_worked*12.00;

    printf("Rs.%f",overtime_pay);
    }
    else printf("No Overtime");
}
    
    return 0;
}