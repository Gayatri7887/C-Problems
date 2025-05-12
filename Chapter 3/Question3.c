/*Any year is input through the keyboard. Wap to determine whether it is a leap year or not.*/
#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if((year%4==0)&&(year%100!=0)||(year%400==0)){
        printf("It is a leap year");
    }
    else{
        printf("Its not a leap year");
    }
    return 0;
}