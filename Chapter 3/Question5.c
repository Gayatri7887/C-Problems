/*A five digit number is entered through the keyboard. 
Reverse it and check weather the reveresed number is equal to the original number.*/
#include<stdio.h>
int main(){
    int num, rev;
    scanf("%d",&num);

    int og_num=num;

    rev=0;

    while (num > 0){
        int b= num%10;
        num=num/10;
        rev=rev*10+b;
        
    }   

    printf("%d\n",rev);

    if (rev==og_num) printf("Equal");
    else printf("Unequal");

    return 0;
}