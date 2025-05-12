/*If a five digit number is input through the keyboard, write a progaram to calculate the sum of its digit */
#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);

    int sum=0;
    for(int i=1;i<=5;i++){
        int b= a%10;
        a/=10;
        sum+=b;
    }
    printf("%d",sum);
    return 0;
}