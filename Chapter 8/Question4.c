#include<stdio.h>

int isLeap(int);

int main(){
    int year;
    scanf("%d",&year);
    int x= isLeap(year);
    if(x){
        printf("It is a leap year.\n");
    }
    else printf("It is not a leap year.");
    return 0;
}
int isLeap(int a){
    if ((a%4==0&&a%100!=0)||a%400==0){
        return 1;
    }
    else return 0;
}