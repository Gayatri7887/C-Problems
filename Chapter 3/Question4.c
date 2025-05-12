/*According to gregorian calender, it was monday on the date 01/01/01. 
If any year is input through the keyboard write a program to find out 
what is the day on 1st january of this year.  */
#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);

    int day=1;
    
    for (int i=1;i<=year;i++){
    if((year%4==0)&&(year%100!=0)||(year%400==0)){
        day=(day+2)%7;
    }
    else{
        day=(day+1)%7;
    }
}
    if (day==1) printf("Monday\n");
    else if (day==2) printf("Tuesday\n");
    else if (day==3) printf("Wednesday\n");
    else if (day==4) printf("Thrusday\n");
    else if (day==5) printf("Friday\n");
    else if (day==6) printf("Saturday\n");
    else if (day==7) printf("Sunday\n");

    return 0;
}