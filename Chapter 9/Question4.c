#include<stdio.h>

void Shift(int*,int*,int*);

int main(){
    int a,b,c; 
    
    scanf("%d %d %d",&a,&b,&c);

    Shift(&a, &b, &c);
    printf("A=%d\n",a);
    printf("B=%d\n",b);
    printf("C=%d",c);

    return 0;
}

void Shift(int *a,int *b,int *c){
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}