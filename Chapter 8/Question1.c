//Factorial of a num
#include<stdio.h>
#include<stdlib.h>
int fact(int);
int main(){
    int n;
    scanf("%d",&n);
    if (n<=0){ 
        printf("Factorial is not defined for negative numbers.\nWe will convert it to positiv number then we will calculate it\n");
        n=abs(n);}
    int f= fact(n);
    printf("%d",f);
    return 0;
}
int fact(int i){
    int fi=1;
    for(int j=1; j<=i;j++){
        fi*=j;
    }
    return fi;
}