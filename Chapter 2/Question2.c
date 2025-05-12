/*If a five digit number is input through the keyboard, write a progaram to reverse */
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int rev=0;
    for(int i=0;i<=4;i++){
        int b= a%10;
        a/=10;
        rev=(rev*10)+b;
    }
    printf("%d",rev);
    return 0;
}