#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int b[a];
    for (int i=0;i<a;i++){
        scanf("%d",&b[i]);    
        
    }
    int greatest = b[0];
    int lowest = b[0];

    for (int i = 1; i < a; i++) {
        if (b[i] > greatest) greatest = b[i];
        if (b[i] < lowest) lowest = b[i];
    }
    int range=greatest-lowest;
    printf("%d",range);
    return 0;
}