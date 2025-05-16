#include<stdio.h>

int sum(int);

int main(){
    int n;
    scanf("%d",&n);
    int y= sum(n);
    printf("%d",y);
    return 0;
}

int sum(int n){
    int x=0;
    if (n==0) return 0;
    else {
        x= n+sum(n-1);
    }

    return x;
}